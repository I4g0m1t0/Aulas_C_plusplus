
#include<iostream> //Insere a biblioteca para usar cin e cout
#include <cmath> //Potência
 
using namespace std;

int num;

main(){
	system("chcp 65001"); //Insere caracteres especiais
	cout<<"\n Números";
	
	cout<<"\n\n Informe um número: ";
	cin>>num;
	
	cout<<"\n Antecessor: "<<num-1<<"\n Número: "<<num<<"\n Sucessor: "<<num+1;

	cout<<"\n\n\n";
}