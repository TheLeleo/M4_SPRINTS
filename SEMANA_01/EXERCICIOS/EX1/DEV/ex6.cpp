// 6 - A função abaixo (que está incompleta) vai "dirigindo" virtualmente um robô 
// e através de 4 sensores em cada um dos 4 pontos do robo ("Direita", "Esquerda", 
// "Frente", "Tras"). 
//      A cada passo, ele verifica as distâncias aos objetos e vai mapeando o terreno 
// para uma movimentação futura. 
//      Ele vai armazenando estas distancias em um vetor fornecido como parâmetro 
// e retorna a ultima posicao preenchida do vetor.
//      Esta função deve ir lendo os 4 sensores até que um comando de pare seja enviado 
//
//      Para simular os sensores e os comandos de pare, use as funções já construídas 
// nos ítens anteriores e em um looping contínuo até que um pedido de parada seja 
// enviado pelo usuário. 
//
//      Complete a função com a chamada das funções já criadas

#include <iostream>
using namespace std;



void ex6(){
  int tamanho;
  int continuar;
  int direcao;
  double dist;

  cout<<"Informe a quantidade de paços que o robô andará: "<<endl;
  cin>>tamanho;

  
  int* dir = new int[tamanho];
  double* dis = new double[tamanho];
  
  for (int i = 0; i < tamanho; i++){
  
    cout<<"Escolha a direção que o robô deve andar"<<endl;
    cout<<"(1) Direita"<<endl;
    cout<<"(2) Esquerda"<<endl;
    cout<<"(3) Frente"<<endl;
    cout<<"(4) Trás"<<endl;
    cin>>direcao;
    
    cout<<"Agora diga quantos metros o robo deve andar"<<endl;
    cin>>dist;
    dis[i] = dist;

    if (direcao == 1){
      dir[i]= 1;
    } else if (direcao == 2){
      dir[i]= 2;
    } else if (direcao == 3){
      dir[i]= 3;
    } else if (direcao == 4){
      dir[i]= 4;
    
    }
    cout<<"Percurso do Robô:"<<endl;
    }
      for (int j = 0; j < tamanho; j++){
      if (dir[j] == 1){
        cout<<"Direita "<<dis[j]<<"m / ";
      } else if (dir[j] == 2){
        cout<<"Esquerda "<<dis[j]<<"m / ";
      } else if (dir[j] == 3){
        cout<<"Frente "<<dis[j]<<"m / ";
      } else if (dir[j] == 4){
        cout<<"Trás "<<dis[j]<<"m / ";
      }
    }
}
