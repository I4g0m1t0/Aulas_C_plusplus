#include<iostream> //Insere a biblioteca para usar cin e cout
#include <cmath> //Potência
 
using namespace std;

float horas;

main(){
	system("chcp 65001"); //Insere caracteres especiais
	cout<<"\n Horas para segundos";
	
	cout<<"\n\n Insira o valor em horas: ";
	cin>>horas;
	
	cout<<"\n Valor em horas: "<<horas<<" hora(s)"; 
	cout<<"\n Valor em metros: "<<horas*3600<<" segundo(s)";
	
}