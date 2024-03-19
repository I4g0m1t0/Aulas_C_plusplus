
#include<iostream> //Insere a biblioteca para usar cin e cout
#include<ctype.h> //Js do c++
 
using namespace std;

char letra;

main(){
	system("chcp 65001"); //Insere caracteres especiais
	cout<<"\n Digite uma letra: ";
	cin>>letra;
	letra = toupper(letra);
	
	if((letra=='A') || (letra=='E') || (letra=='I') || (letra=='O') || (letra=='U')){
		cout<<"\n Você digitou uma vogal";
	}
	else{
		cout<<"\n Você não digitou uma vogal";
	}
	cout<<"\n\n\n";
}
