#include<iostream> //Insere a biblioteca para usar cin e cout
#include <cmath> //Potência
 
// FUP que verifique se o número fornecido é par ou ímpar

using namespace std;

int num;

main(){
	system("chcp 65001"); //Insere caracteres especiais
	cout<<"\n A pra B e vice-versa";
	
	cout<<"\n\n Insira o valor: ";
	cin>>num;
		
	if ((num % 2) == 0){
		cout<<"\n Você inseriu um número par.";
	}
	else{
		cout<<"\n Você inseriu um número ímpar.";
	}
	
}