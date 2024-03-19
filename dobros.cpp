
#include<iostream> //Insere a biblioteca para usar cin e cout
#include <cmath> //Potência
 
using namespace std;

int num1;
int dobro, triplo, quint;

main(){
	system("chcp 65001"); //Insere caracteres especiais
	cout<<"\n Doença mental";
	
	cout<<"\n\n Informe um número: ";
	cin>>num1;
	
	dobro = num1 * 2;
	triplo = num1 * 3;
	quint = num1 * 5;
	
	
	cout<<"\n O dobro do algarismo é: "<<dobro;
	cout<<"\n O triplo do algarismo é: "<<triplo;
	cout<<"\n O quíntuplo do algarismo é: "<<quint;
		
		
	cout<<sin(num1);
	cout<<"\n\n\n";
}
