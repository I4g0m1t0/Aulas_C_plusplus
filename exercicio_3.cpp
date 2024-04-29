
#include<iostream> //Insere a biblioteca para usar cin e cout
#include <cmath> //Potência

/*4. Modifique o progama 2(da lista) deduza 13% do valor
   a receber pelo trabalhador. Esse valor é do INSS.
   Imprima: o salário bruto, quanto de imposto foi 
   tirado do salário e o salário final.*/
 
using namespace std;

float num;
float valor, salario;

main(){
	system("chcp 65001"); //Insere caracteres especiais
	cout<<"\n Salário";
	
	cout<<"\n\n Insira o número de horas que você trabalha no mês: ";
	cin>>num;
	
	cout<<"\n\n Insira o valor da sua hora: ";
	cin>>valor;
	
	salario = num*valor;
	
	cout<<"\n O seu salário bruto é: "<<salario;
	
	cout<<"\n O seu INSS é: "<<salario*0.13;
	
	cout<<"\n O seu salário líquido é: "<<salario*0.87;
}