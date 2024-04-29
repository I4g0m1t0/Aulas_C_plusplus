/*Leia um vetor de caracteres. Pergunte ao usuário qual caractere ele deseja 
procurar no vetor. Pesquise e imprima a quantidade de vezes que o caractere 
desejado está no vetor*/
#include <iostream>//INCLUI A BIBLIOTECA
#include <time.h>
using namespace std;
char vetor[100];//declarar variável
int const TAM = 10;
int const MAX = 26;
char alfabeto[MAX] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g',
                          'h', 'i', 'j', 'k', 'l', 'm', 'n',
                          'o', 'p', 'q', 'r', 's', 't', 'u',
                          'v', 'w', 'x', 'y', 'z' };

char busca;
int resultado;
main()
{
    srand(time(NULL));
	system("chcp 65001 ");
	cout<<"\n\t PROGRAMA VETOR CARACTERES ALEATÓRIO ";
    for (int i=0;i<TAM;i++)
	    vetor[i]=alfabeto[rand() % MAX];
 	cout<<"\n\n IMPRIMINDO O VETOR \n\n ";
    for (int i=0;i<TAM;i++)
	   cout<<"  "<< vetor[i];
	cout<<"\n\n Digite o caracter que deseja buscar \n\n ";
	cin>>busca;
	for (int i=0; i<TAM; i++){
		if(vetor[i]==busca){
			resultado++;
		}
	}
	
	cout<<"\n A quantidade de vezes que esta letra aparece é: "<<resultado;
	cout<<"\n\n\n\n\n"; 
}
