#include<iostream> //Insere a biblioteca para usar cin e cout
#include <cmath> //Potência

//5.FUP que leia um valor em metros e converta para centímetros.
 
using namespace std;

float metros;

main(){
	system("chcp 65001"); //Insere caracteres especiais
	cout<<"\n Metros para centímetros";
	
	cout<<"\n\n Insira o valor em metros: ";
	cin>>metros;
	
	cout<<"\n Valor em metros: "<<metros<<" metro(s)"; 
	cout<<"\n Valor em centímetros: "<<metros*100<<" centímetro(s)";
	
}