
#include<iostream> //Insere a biblioteca para usar cin e cout
#include <cmath> //Potência

/*2. FUP que leia o valor da hora do trabalhador e a 
   quantidade de horas trabalhadas. Imprima o valor
   que o trabalhador deverá receber ao final do mês.*/
 
using namespace std;

int num;
float valor;

main(){
	system("chcp 65001"); //Insere caracteres especiais
	cout<<"\n Números";
	
	cout<<"\n\n Insira o número de horas que você trabalha no mês: ";
	cin>>num;
	
	cout<<"\n\n Insira o valor da sua hora: ";
	cin>>valor;
	
	cout<<"\n O valor que você deve receber ao fim do mês é: "<<num*valor;

	cout<<"\n\n\n";
}