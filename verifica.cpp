
#include<iostream> //Insere a biblioteca para usar cin e cout
 
using namespace std;

char letra;

main(){
	system("chcp 65001"); //Insere caracteres especiais
	cout<<"\n Digite F ou M: ";
	cin>>letra;
	if(letra=='F'|| letra=='f'){
		cout<<"\n Feminino";
	}
	else{
		if(letra=='M'|| letra=='m'){
		cout<<"\n Masculino";
	}
	}
	cout<<"\n\n\n";
}
