#include<iostream> //Insere a biblioteca para usar cin e cout
#include <cmath> //Potência
 
//6.FUP que leia um valor em quilometros e converta para metros.

using namespace std;

float km;

main(){
	system("chcp 65001"); //Insere caracteres especiais
	cout<<"\n Quilômetros para metros";
	
	cout<<"\n\n Insira o valor em quilômetros: ";
	cin>>km;
	
	cout<<"\n Valor em quilômetros: "<<km<<" quilômetro(s)"; 
	cout<<"\n Valor em metros: "<<km*1000<<" metro(s)";
	
}