/* FUP que imprima uma torre invertida*/
 
#include<iostream>

using namespace std;

int linha, altura, asteristico;
 
main(){

	system("chcp 65001");//acentos

	cout<<"\n Digite o tamanho da torre: ";

	cin>>altura;


	for (linha=altura; linha>=0; linha--)

		{

		for (asteristico=1; asteristico<=linha; asteristico++ )

			cout<<"*";
			cout<<"\n";
 
		}
 
}
