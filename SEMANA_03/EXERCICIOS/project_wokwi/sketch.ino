const int ldr_input = 18;

const int led_green = 4;
const int led_red = 5;
const int led_blue = 2;
const int led_yellow = 7;


const int save_btn = 20;

const int buzzer = 8;

int light = 0;
int valorLDR = 0;
int luminosidade = 0;
int frequencia_buzzer = 0;
int restante = 0;

int save_pressed = 0;
int play_pressed = 0;

int musica[10] = {};
int count_music = 0;

void setup() {
  Serial.begin(9600);

  // Input LDR
  pinMode(ldr_input, INPUT);
  // Input save btn
  pinMode(save_btn, INPUT);

  // Output LED's
  pinMode(led_green, OUTPUT);
  pinMode(led_red, OUTPUT);
  pinMode(led_blue, OUTPUT);
  pinMode(led_yellow, OUTPUT);
  pinMode(buzzer, OUTPUT);

}

void play(){
    for (int i = 0; i < 10; i++){
      tone(buzzer, musica[i]);
      delay(1000);
    }
}

void loop() {
  
  // leitura do valor do LDR
  valorLDR = analogRead(ldr_input); 
  // conversão para uma escala de 0 a 5
  luminosidade = map(valorLDR, 64, 8700, 0, 15); 
  // conversão para frequencia de buzzer
  frequencia_buzzer = map(valorLDR, 64, 8126, 0, 1600);
  
  int luzes[4] = {};
  int binario = 0, count = 0, produto = 1;
  while (luminosidade != 0) {
    // verifica se o numero atual será 0 ou 1
    restante = luminosidade % 2;
    // adiciona o 0 ou 1 descoberto acima de acordo com a casa atual
    binario = binario + (restante * produto);
    // avança para o próximo numero a ser calculado 
    luminosidade = luminosidade / 2;

    if (produto == 1 && binario == 1 && count == 0){
      luzes[3] = 1;
    }
    if (produto == 10 && binario >= 10  && count == 1){
      luzes[2] = 1;
    }
    if (produto == 100 && binario >= 100  && count == 2){
      luzes[1] = 1;
    }
    if (produto == 1000 && binario >= 1000  && count == 3){
      luzes[0] = 1;
    }

    // avança para a próxima casa decimal
    produto *= 10;
    count++;
  }
  
  
  for (int i = 0; i < 4; i++){
    Serial.print(luzes[i]);
  }
  Serial.println("");

  if (luzes[0] == 1){
    digitalWrite(led_green, HIGH);
  } else{
    digitalWrite(led_green, LOW);
  }

  if (luzes[1] == 1){
    digitalWrite(led_red, HIGH);
  } else {
    digitalWrite(led_red, LOW);
  }

  if (luzes[2] == 1){
    digitalWrite(led_blue, HIGH);
  } else {
    digitalWrite(led_blue, LOW);
  }

  if (luzes[3] == 1){
    digitalWrite(led_yellow, HIGH);
  } else {
    digitalWrite(led_yellow, LOW);
  }

  int btn = digitalRead(save_btn);

  if (btn == HIGH && save_pressed == 0){
    save_pressed = 1;
  }
  if (btn == LOW && save_pressed == 1){
    save_pressed = 0;
  }
  
  if (save_pressed == 0){
    musica[count_music] = frequencia_buzzer;
    tone(buzzer, frequencia_buzzer);
    count_music = count_music + 1;
    delay(1000);
    noTone(buzzer);
    save_pressed = 1;
  }
  
  if(count_music == 10){
    play();
    noTone(buzzer);
    count_music = 0;
  }

  
}