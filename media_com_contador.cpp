
#include<iostream> //Insere a biblioteca para usar cin e cout
 
using namespace std;

float nota1, nota2, nota3, nota4, media;
int count = 0;

main(){
	system("chcp 65001"); //Insere caracteres especiais
	cout<<"\n Média com contador automático";
	
	cout<<"\n\n Informe sua 1° nota: ";
	cin>>nota1;
	count++;
	
	cout<<"\n Informe sua 2° nota: ";
	cin>>nota2;
	count++;
	
	cout<<"\n Informe sua 3° nota: ";
	cin>>nota3;
	count++;
	
	cout<<"\n Informe sua 4° nota: ";
	cin>>nota4;
	count++;
	
	float soma = nota1 + nota2 + nota3 + nota4;
	
	media = (soma) / count;
	
	cout<<"\n A sua média é: "<<media; 
	
	if (media>=7.0){
		cout<<"\n\n Status: aprovado";
	}
	else{
		cout<<"\n\n Status: reprovado";
	}
	cout<<"\n\n\n";
}
