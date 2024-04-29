/*2. FUP altere o programa anterior para imprimir:
 A quantidade de números negativos
 A quantidade de pares
 A quantidade de números múltiplos de 7
*/
 
#include<iostream>

using namespace std;

int nega, par, mtpl7, i, a;
 
main(){

	system("chcp 65001");//acentos
	
	for (i=0; i<10; i++){
		cout << "\n Número " << i + 1 << ": ";
        cin >> a;
        if(a<0){
        	nega++;
		}
		if(a%2==0){
			par++;
		}
		if(a%7==0){
			mtpl7++;
		}
	}
	
	cout<<"\n A quantidade de negativos é: "<<nega;
	cout<<"\n A quantidade de pares é: "<<par;
	cout<<"\n A quantidade de múltiplos de 7 é: "<<mtpl7;
}
