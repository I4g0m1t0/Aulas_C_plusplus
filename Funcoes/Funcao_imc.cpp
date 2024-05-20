#include <iostream>
using namespace std;

float imc(float p, float a){
	int i;
	i=p/(a*a);
	return i;
}

main (){
	float peso, altura;
	cout<<"Digite o seu peso...: ";
	cin>>peso;
	cout<<"Digite a sua altura...: ";
	cin>>altura;
	
	cout<<"O seu imc e "<<imc(peso, altura);
	
}