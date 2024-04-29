#include<iostream> //Insere a biblioteca para usar cin e cout
#include <cmath> //Potência
 
// FUP que verifique se o número fornecido é par ou ímpar

using namespace std;

int num1, num2;

main(){
	system("chcp 65001"); //Insere caracteres especiais
	cout<<"\n Maior valor";
	
	cout<<"\n\n Insira o valor 1: ";
	cin>>num1;
	
	cout<<"\n Insira o valor 2: ";
	cin>>num2;
		
	if (num1 == num2){
		cout<<"\n Os dois números são iguais.";
	}
	else{
		if(num1>num2){
			cout<<"\n O primeiro valor é o maior.";
		}
		else{
			cout<<"\n O segundo valor é o maior.";
		}	
	}
	
}