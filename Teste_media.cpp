
#include<iostream> //Insere a biblioteca para usar cin e cout
 
using namespace std;

float nota1, nota2, nota3, nota4, media, soma;

main(){
	system("chcp 65001"); //Insere caracteres especiais
	cout<<"\n Média simples";
	
	cout<<"\n\n Informe sua 1° nota: ";
	cin>>nota1;
	
	cout<<"\n Informe sua 2° nota: ";
	cin>>nota2;
	
	cout<<"\n Informe sua 3° nota: ";
	cin>>nota3;
	
	cout<<"\n Informe sua 4° nota: ";
	cin>>nota4;
	
	soma = nota1 + nota2 + nota3 + nota4;
	
	media = soma / 4;
	
	cout<<"\n A sua média é: "; 
	cout<<media;
	
	if (media>=7.0){
		cout<<"\n\n Status: aprovado";
	}
	else{
		cout<<"\n\n Status: reprovado";
	}
	cout<<"\n\n\n";
}
