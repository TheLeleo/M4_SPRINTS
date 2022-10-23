// 1 -  Faça uma função que recebe uma certa medida e ajusta ela percentualmente 
// entre dois valores mínimo e máximo e retorna esse valor

#include <iostream>
using namespace std;


void ex1()
{
    int min;
    int max;
    int num;

    double sub_min;
    double sub_max;
    double per_min;
    double per_max;
  
    cout << "Escreva um número mínimo: ";
    cin >> min;
    cout << "Agora escreva um número máximo: ";
    cin >> max;
    cout << "Por fim, escreva número: ";
    cin >> num;


    if (min > num){
      sub_min = min - num;
      cout<< "diferença menor: "<<sub_min<<endl;
      
    } else if (min < num){
      sub_min = num - min;
      cout<< "diferença maior: "<<sub_min<<endl;
    }
    if (max > num){
      sub_max = max - num;
      cout<< "diferença menor: "<<sub_max<<endl;
    } else if (max < num){
      sub_max = num - max;
      cout<< "diferença maior: "<<sub_max<<endl;
    }

    if (sub_max > sub_min){
      cout<<"o número informado esta mais proximo do valor minimo"<<endl;
    } else if (sub_max < sub_min){
      cout<<"o número informado esta mais proximo do valor máximo"<<endl;
    } else {
      cout<<"o número informado igualmente aproximado dos valor máximo e mínimo"<<endl;
    }

}

