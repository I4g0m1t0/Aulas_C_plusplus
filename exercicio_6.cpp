#include<iostream> //Insere a biblioteca para usar cin e cout
#include <cmath> //Potência
 
using namespace std;

float km;

main(){
	system("chcp 65001"); //Insere caracteres especiais
	cout<<"\n Salário";
	
	cout<<"\n\n Insira o valor em quilômetros: ";
	cin>>km;
	
	cout<<"\n Valor em quilômetros: "<<km<<" quilômetro(s)"; 
	cout<<"\n Valor em metros: "<<km*1000<<" metro(s)";
	
}