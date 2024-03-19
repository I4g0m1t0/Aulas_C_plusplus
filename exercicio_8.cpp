#include<iostream> //Insere a biblioteca para usar cin e cout
#include <cmath> //Potência
 
using namespace std;

float altura, imc;

main(){
	system("chcp 65001"); //Insere caracteres especiais
	cout<<"\n Horas para segundos";
	
	cout<<"\n\n Insira a sua altura em metros: ";
	cin>>altura;
	
	imc = ((72.7*altura) - 58);
	
	cout<<"\n O seu peso ideal é: "<<imc<<" kilos"; 
	
}