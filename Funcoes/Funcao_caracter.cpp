#include <iostream>
#include "Tramontin.h"
using namespace std;

float n1, n2, resultado;
char op;

main() {
	system("CHCP 65001");
	cout<<"Informe um número: ";
	cin>>n1;
	cout<<"Informe outro número: ";
	cin>>n2;
	cout<<"[+] Para somar\n[-] Para subtrair\n[*] Para multiplicar\n[/] Para dividir\n\nSua opção: ";
	cin>>op;
	resultado = conta(n1, n2, op);
	cout<<"O resultado da operação é: "<<resultado;
}

/*float conta(float x, float y, char op) {
	switch(op) {
		case '+':
			return x + y;
			break;
		case '-':
			return x - y;
			break;
		case '*':
			return x * y;
			break;
		case '/':
			return x / y;
			break;
	}
}*/
