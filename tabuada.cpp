
#include<iostream> //Insere a biblioteca para usar cin e cout
#include <cmath> //Potência
 
using namespace std;

int num1;
int cont = 0;
int tab;

main(){
	system("chcp 65001"); //Insere caracteres especiais
	cout<<"\n Tabuada";
	
	cout<<"\n\n Informe um número: ";
	cin>>num1;
	
	cout<<"\n A tabuada deste número é:";
	cout<<"\n"<<num1<<" * 0 = "<<num1*0;
	cout<<"\n"<<num1<<" * 1 = "<<num1*1;
	cout<<"\n"<<num1<<" * 2 = "<<num1*2;
	cout<<"\n"<<num1<<" * 3 = "<<num1*3;
	cout<<"\n"<<num1<<" * 4 = "<<num1*4;
	cout<<"\n"<<num1<<" * 5 = "<<num1*5;
	cout<<"\n"<<num1<<" * 6 = "<<num1*6;
	cout<<"\n"<<num1<<" * 7 = "<<num1*7;
	cout<<"\n"<<num1<<" * 8 = "<<num1*8;
	cout<<"\n"<<num1<<" * 9 = "<<num1*9;
	cout<<"\n"<<num1<<" * 10 = "<<num1*10;
	
	cout<<"\n\n Com estrutura de repetição: \n";
	
	for (cont = 0; cont <= 10; cont++){
		tab = num1*cont;
		cout<<"\n"<<tab;
	}
	
	cout<<"\n\n\n";
}
