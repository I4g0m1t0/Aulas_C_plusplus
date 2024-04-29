/*1. FUP que leia 10 números e verifique quantos destes valores são 
negativos. Imprima uma mensagem na tela com a quantidade de números 
negativos.
*/
 
#include<iostream>

using namespace std;

int count, i, a;
 
main(){

	system("chcp 65001");//acentos
	
	for (i=0; i<10; i++){
		cout << "\n Número " << i + 1 << ": ";
        cin >> a;
        if(a<0){
        	count++;
		}
	}
	
	cout<<"\n A quantidade de negativos é: "<<count;
}
