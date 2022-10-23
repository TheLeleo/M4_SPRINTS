
// 3 - Faça uma função que armazena uma medida inteira qualquer 
// em um vetor fornecido. Note que como C não possui vetores 
// nativos da linguagem, lembre-se que você precisa passar o 
// valor máximo do vetor assim como a última posição preenchida
// Evite também que, por acidente, um valor seja escrito em 
// uma área de memória fora do vetor

#include <iostream>
using namespace std;



void ex3()
{
  int vetor[4];
  cout<<"digite um numero "; 
  cin >> vetor[0];
  cout<<"digite outro numero "; 
  cin >> vetor[1];
  cout<<"digite mais um numero "; 
  cin >> vetor[2];
  cout<<"digite o ultimo numero "; 
  cin >> vetor[3];

  for (int i = 0; i < 4; i++){
    cout<<vetor[i]<<" ";
    }
}
