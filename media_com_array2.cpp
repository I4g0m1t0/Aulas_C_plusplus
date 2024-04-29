/* Leia um vetor com 10 idades. Calcule e imprima: a média das idades, a 
quantidade de pessoas com idade superior e inferior à média calculada*/

#include <iostream>//INCLUI A BIBLIOTECA
#include <time.h>
using namespace std;
float idades [10];//declarar variável
float soma = idades [0];
float media;
int maior, menor;

main()
{
	system("chcp 65001"); //Insere caracteres especiais
	cout<<"\n Vetores";
	
	cout<<"\n\n Digite 10 números: \n";
	for (int i=0; i<10; i++){
		cout << "\n Número " << i + 1 << ": ";
        cin >> idades[i];
        soma += idades[i];
	}
	
	media = soma/10;
	
	for (int i=0; i<10; i++){
		if(idades[i]>media){
			maior++;
		}
		else{
			menor++;
		}
	}
	
	/*for(int idade : idades){
		if(idade>media){
			maior++;
		}
		else{
			menor++;
		}
	}*/
	
	
	
	cout<<"\n A média vale: "<<media;
	cout<<"\n A quantidade de notas maiores que a média é: "<<maior;
	cout<<"\n A quantidade de notas menorea que a média é: "<<menor;
}