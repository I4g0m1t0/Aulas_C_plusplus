#include<iostream> //Insere a biblioteca para usar cin e cout
#include <cmath> //Potência
 
/*2. FUP que leia um número e imprima:
  * esse número ao quadrado;
  * a raiz quadrada deste número;
  * o triplo deste número;
  * o dobro deste número.*/

using namespace std;

float A;
float quad, raiz, triplo, dobro;

main(){
	system("chcp 65001"); //Insere caracteres especiais
	cout<<"\n Se quiser sim mano";
	
	cout<<"\n\n Insira um número: ";
	cin>>A;
	
	quad = pow (A , 2);
	raiz = sqrt (A);
	triplo = A*3;
	dobro = A*2;
	
	cout<<"\n Esse número ao quadrado é: "<<quad<<"\n A raiz quadrada deste número é: "<<raiz<<"\n O triplo deste número é: "<<triplo<<"\n O dobro deste número é: "<<dobro;
}