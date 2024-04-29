#include<iostream> //Insere a biblioteca para usar cin e cout
#include <cmath> //Potência
 
// FUP que verifique se o número fornecido é par ou ímpar

using namespace std;

int num1, num2, num3, maior, menor;

main(){
	system("chcp 65001"); //Insere caracteres especiais
	cout<<"\n Maior valor";
	
	cout<<"\n\n Insira o valor 1: ";
	cin>>num1;
	
	cout<<"\n Insira o valor 2: ";
	cin>>num2;
	
	cout<<"\n Insira o valor 3: ";
	cin>>num3;
		
	if ((num1 == num2) && (num2 == num3)){
		cout<<"\n Os três números são iguais.";
	}else{
		if((num1>num2) && (num1>num3)){
			maior = num1;
			cout<<"\n O "<<maior<<" é o maior.";
		}else{
			if((num2>num1) && (num2>num3)){
				maior = num2;
				cout<<"\n O "<<maior<<" é o maior.";
		}else{
			if((num3>num1) && (num3>num2)){
				maior = num3;
				cout<<"\n O "<<maior<<" é o maior.";
		}
		}
		if ((num1 == num2) && (num2 == num3)){
		cout<<"\n Os três números são iguais.";
		}else{
			if((num1<num2) && (num1<num3)){
				menor = num1;
				cout<<"\n O "<<menor<<" é o menor.";
			}else{
				if((num2<num1) && (num2<num3)){
					menor = num2;
					cout<<"\n O "<<menor<<" é o menor.";
				}else{
						menor = num3;
						cout<<"\n O "<<menor<<" é o menor.";
					}
	}
}
}
}
}
