// 5 - Faça uma função que pergunta ao usuário se ele deseja continuar o mapeamento e 
// retorna verdadeiro ou falso

#include <iostream>
using namespace std;

void ex5(){
  int continuar_int = 1;
  char continuar;
  while (continuar_int != 0){
    cout<<"Deseja continuar o mapeamento? "<<endl;
    cout<<"(S) para SIM / (N) para NÃO"<<endl;
    cin>>continuar;
    if (continuar == 's'){
      continuar_int = 1;
    } else if (continuar == 'n'){
      continuar_int = 0;
      cout<<"mapeamento encerrado. "<<endl;
    } else {
      cout<<"Caractere não reconhecido, por favor, digite novamente.";
    }
  }
}