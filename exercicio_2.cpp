
#include<iostream> //Insere a biblioteca para usar cin e cout
#include <cmath> //Potência
 
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