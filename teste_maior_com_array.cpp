#include<iostream> //Insere a biblioteca para usar cin e cout
#include <cmath> //Potência
 
// FUP que verifique se o número fornecido é par ou ímpar

using namespace std;

int num[3];
int maior = num[0];
int menor = num[0];

main(){
	system("chcp 65001"); //Insere caracteres especiais
	cout<<"\n Maior valor";
	
	cout<<"\n\n Digite 3 números: ";
	for (int i=0; i<3; i++){
		cout << "\n Número " << i + 1 << ": ";
        cin >> num[i];
        if(num[i]>maior){
        	maior = num[i];
		}
	}	
	
	cout<<"\n O maior valor é o: "<<maior;
}
