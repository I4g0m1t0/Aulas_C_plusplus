#include<iostream> //Insere a biblioteca para usar cin e cout
#include <cmath> //Potência
 
//9.Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit. A fórmula de conversão é : F = (9*C+160)/5 Sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.

using namespace std;

float C, F;

main(){
	system("chcp 65001"); //Insere caracteres especiais
	cout<<"\n Celsius para Fahrenheit";
	
	cout<<"\n\n Insira a temperatura em graus Celsius: ";
	cin>>C;
	
	F = (9*C+160)/5;
	
	
	cout<<"\n A temperatura em Fahrenheit: "<<F<<" °F"; 
	
}