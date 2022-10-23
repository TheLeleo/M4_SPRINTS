
#include <iostream>
#include "ex1.cpp"
#include "ex2.cpp"
#include "ex3.cpp"
#include "ex4.cpp"
#include "ex5.cpp"
#include "ex6.cpp"
using namespace std;


int main(){
	int exercicio;
  	cout<<"Selecione o exercicio que deseja iniciar:"<<endl;
  	cout<<"(1) ex1 / (2) ex2 / (3) ex3 / (4) ex4 / (5) ex5 / (6) ex6";
  	cin>> exercicio;

	if (exercicio == 1){
		ex1();
	} else if (exercicio == 2){
		ex2();
	} else if (exercicio == 3){
		ex3();
	} else if (exercicio == 4){
		ex4();
	} else if (exercicio == 5){
		ex5();
	} else if (exercicio == 6){
		ex6();
	} else {
		cout<<"O número digitado não corresponde a nenhum exercício existente.";
	}
}
