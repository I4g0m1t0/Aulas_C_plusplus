#include <iostream>
#include "Tramontin.h"
using namespace std;

float n1, n2;

main() {
	system("CHCP 65001");
	cout<<"Informe um número: ";
	cin>>n1;
	cout<<"Informe outro número: ";
	cin>>n2;
	cout<<"O resultado da subtração é: "<<sub(n1, n2);
}