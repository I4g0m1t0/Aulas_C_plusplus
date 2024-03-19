
#include<iostream> //Insere a biblioteca para usar cin e cout
#include <cmath> //Potência
 
using namespace std;

int num1, num2;
int soma, subtrai, multiplica, divide,x;

main(){
	system("chcp 65001"); //Insere caracteres especiais
	cout<<"\n Contas";
	
	cout<<"\n\n Informe um número: ";
	cin>>num1;
	
	cout<<"\n Informe outro número: ";
	cin>>num2;
	
	soma = num1 + num2;
	subtrai = num1 - num2;
	multiplica = num1 * num2;
	divide = num1 / num2;
	
	x = pow(num1, num2);//Cálculo de potência
	
	
	cout<<"\n A soma dos algarismos é: "<<soma;
	cout<<"\n A subtração dos algarismos é: "<<subtrai;
	cout<<"\n A multiplicação dos algarismos é: "<<multiplica;
	cout<<"\n A divisão dos algarismos é: "<<divide;
	cout<<"\n Um número elevado ao outro é: "<<x;
		
	cout<<"\n\n\n";
}
