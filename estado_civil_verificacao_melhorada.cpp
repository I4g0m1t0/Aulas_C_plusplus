
#include<iostream> //Insere a biblioteca para usar cin e cout
#include<ctype.h> //Js do c++
 
using namespace std;

char letra;

main(){
	system("chcp 65001"); //Insere caracteres especiais
	cout<<"========================================================\n\n Legenda: \n C = Casado\n S = Solteiro\n D = Divorciado\n V = Viúvo\n Z = Separado\n\n========================================================\n\n Digite a letra corresponente ao seu estado civil: ";
	cin>>letra;
	letra = toupper(letra);
	
	switch(letra) {
    case 'C':
        cout << "\n Você é casado";
        break;
    case 'S':
        cout << "\n Você é solteiro";
        break;
    case 'D':
        cout << "\n Você é divorciado";
        break;
    case 'V':
        cout << "\n Você é viúvo";
        break;
    case 'Z':
        cout << "\n Você é separado";
        break;
    default:
        cout << "\n Você é uma geladeira!"; //kkkkkkkkkkkkkkkkkkkk
}
	cout<<"\n\n\n";
}

