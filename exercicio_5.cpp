#include<iostream> //Insere a biblioteca para usar cin e cout
#include <cmath> //Potência
 
using namespace std;

float metros;

main(){
	system("chcp 65001"); //Insere caracteres especiais
	cout<<"\n Salário";
	
	cout<<"\n\n Insira o valor em metros: ";
	cin>>metros;
	
	cout<<"\n Valor em metros: "<<metros<<" metro(s)"; 
	cout<<"\n Valor em centímetros: "<<metros*100<<" centímetro(s)";
	
}