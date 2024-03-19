
#include<iostream> //Insere a biblioteca para usar cin e cout
 
using namespace std;

const int numNotas = 4;
float notas[numNotas];
float soma, media;


main(){
	system("chcp 65001"); //Insere caracteres especiais
	cout<<"\n Média com array\n";
	
	for ( int i = 0; i < numNotas; i++ ){
		cout<<"\n Informe a "<<i+1<<"ª nota: ";
		cin>>notas[i];
		soma+=notas[i];
	}
	
	cout<<"\n A sua média é: "; 
	media = soma/numNotas;
	cout<<media;
	
	if (media>=7.0){
		cout<<"\n\n Status: aprovado";
	}
	else{
		cout<<"\n\n Status: reprovado";
	}
	cout<<"\n\n\n";
}
