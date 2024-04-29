/* FUP que imprima um quadrado*/
 
#include<iostream>

using namespace std;

int linha, altura, asteristico;
 
main(){

	system("chcp 65001");//acentos

	cout<<"\n Digite o tamanho da torre: ";

	cin>>altura;


	for (linha=1; linha<=altura; linha++)

		{

		for (asteristico=1; asteristico<=linha; asteristico++ )

			cout<<"*";
			cout<<"\n";
 
		}
 
}
