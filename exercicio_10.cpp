#include<iostream> //Insere a biblioteca para usar cin e cout
#include <cmath> //Potência
 
//10. Leia dois valores A e B, faça um programa que efetue a troca dos valores de forma que a variável A passe a possuir o valor da variável B e a variável B passe a possuir o valor da variável A. Apresentar os valores das variáveis antes e depois de trocados.

using namespace std;

float A, B, Aantes, Bantes;

main(){
	system("chcp 65001"); //Insere caracteres especiais
	cout<<"\n A pra B e vice-versa";
	
	cout<<"\n\n Insira o valor de A: ";
	cin>>A;
	
	cout<<"\n\n Insira o valor de B: ";
	cin>>B;
	
	Aantes = B;
	Bantes = A;
	
	cout<<"\n\n O valor de A era: "<<A<<" e ficou: "<<Aantes;
	
	cout<<"\n\n O valor de B era: "<<B<<" e ficou: "<<Bantes;	
	
}