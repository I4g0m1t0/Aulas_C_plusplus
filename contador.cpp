#include<iostream>

using namespace std;

int nega, posi, mtpl7, i, a;
 
main(){

	system("chcp 65001");//acentos
	
	for (i=0; i<10; i++){
		cout << "\n Número " << i + 1 << ": ";
        cin >> a;
        if(a<0){
        	nega++;
		}
		if(a>0){
			posi+=a;
		}
	}
	
	cout<<"\n A quantidade de negativos é: "<<nega;
	cout<<"\n A quantidade de positivos é: "<<posi;
}
