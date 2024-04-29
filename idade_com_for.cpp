/*3. FUP que leia a idade de 15 pessoas.
 
Após calcule e imprima:
a. A menor idade do grupo;
b. A maior maior do grupo;
*/
 
#include<iostream>

using namespace std;

int i, idade, maior, menor;
 
main(){
	
	system("chcp 65001");//acentos
	
	cout<<"\n ========= Idades ========== ";
	
	cout<<"\n\n Idade 1: ";
	cin>>idade;
	
	maior = idade;
	menor = idade;

	
	for (i=1; i<15; i++){
		cout << "\n Idade " << i + 1 << ": ";
        cin >> idade;
        
        if(idade>maior){
        	maior = idade;
		}
		
		if(idade<menor){
			menor = idade;
		}
		
	}
	
	cout<<"\n A maior idade é: "<<maior;
	cout<<"\n A menor idade é: "<<menor;
}            
