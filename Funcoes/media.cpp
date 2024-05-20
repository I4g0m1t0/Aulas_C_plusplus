#include <iostream>
using namespace std;
float calcularMedia(float n1, float n2, float n3);
float resultado, n1, n2, n3;

main(){
	system("chcp 65001");
	cout<<"Nota 1: ";
	cin>>n1;
	cout<<"Nota 2: ";
	cin>>n2;
	cout<<"Nota 3: ";
	cin>>n3;
	resultado = calcularMedia(n1, n2, n3);
	cout<<"A média é: "<<resultado;
}
//Função para calcular a média
float calcularMedia(float n1, float n2, float n3){
	float media;
	media = (n1+n2+n3)/3;
	return (media);
}