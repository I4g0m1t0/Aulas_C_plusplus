#include<iostream> //Insere a biblioteca para usar cin e cout
#include <cmath> //Potência
 
//8.Tendo como dados de entrada a altura de uma pessoa, construa   um programa que calcule seu peso ideal, usando a seguinte fórmula: (72.7*altura) – 58.

using namespace std;

float altura, imc;

main(){
	system("chcp 65001"); //Insere caracteres especiais
	cout<<"\n Peso ideal";
	
	cout<<"\n\n Insira a sua altura em metros: ";
	cin>>altura;
	
	imc = ((72.7*altura) - 58);
	
	cout<<"\n O seu peso ideal é: "<<imc<<" kilos"; 
	
}