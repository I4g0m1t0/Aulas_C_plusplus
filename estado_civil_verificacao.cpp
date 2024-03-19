
#include<iostream> //Insere a biblioteca para usar cin e cout
#include<ctype.h> //Js do c++
 
using namespace std;

char letra;

main(){
	system("chcp 65001"); //Insere caracteres especiais
	cout<<"========================================================\n\n Legenda: \n C = Casado\n S = Solteiro\n D = Divorciado\n V = Viúvo\n Z = Separado\n\n========================================================\n\n Digite a letra corresponente ao seu estado civil: ";
	cin>>letra;
	letra = toupper(letra);
	
	if(letra=='C'){
		cout<<"\n Você é casado";
	} else {
		if(letra=='S') {
			cout<<"\n Você é solteiro";
		} else {
		if(letra=='D') {
			cout<<"\n Você é divorciado";
		} else {
		if(letra=='V') {
			cout<<"\n Você é viúvo";
		} else {
		if(letra=='Z') {
			cout<<"\n Você é separado";
		} else{
		cout<<"\n Você é uma geladeira!"; //kkkkkkkkkkkkkkkkkkkk
	}
	cout<<"\n\n\n";
}
}
}
}
}

