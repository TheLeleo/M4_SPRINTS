// 4 - Faça uma função que recebe um vetor com 4 posições que contém 
// o valor da distância de um pequeno robô até cada um dos seus 4 lados.
// A função deve retornar duas informações: A primeira é a direção 
// de maior distância ("Direita", "Esquerda", "Frente", "Tras") e a 
// segunda é esta maior distância.

#include <iostream>
using namespace std;

int ex4(){
  int distancia1;
  int distancia2;
  int distancia3;
  int distancia4;
  int maior_distancia;
  
  cout<<"digite a distância da esquerda "; 
  cin >> distancia1;
  cout<<"digite a distância da direita "; 
  cin >> distancia2;
  cout<<"digite a distância da frente "; 
  cin >> distancia3;
  cout<<"digite a distância de trás "; 
  cin >> distancia4;


  if (distancia1 > distancia2 and distancia1 > distancia3 and distancia1 > distancia4){
    cout<<"esquerda "<<distancia1;
    maior_distancia = distancia1;
  } else if (distancia2 > distancia1 and distancia2 > distancia3 and distancia2 > distancia4){
    cout<<"direita "<<distancia2;
    maior_distancia = distancia1;
  } else if (distancia3 > distancia1 and distancia3 > distancia2 and distancia3 > distancia4){
    cout<<"frente "<<distancia3;
    maior_distancia = distancia1;
  } else if (distancia4 > distancia1 and distancia4 > distancia2 and distancia4 > distancia3){
    cout<<"trás "<<distancia4;
    maior_distancia = distancia1;
  } else {
    cout<<"dois números informados possuem o mesmo valor";
  }
  return maior_distancia;
}
