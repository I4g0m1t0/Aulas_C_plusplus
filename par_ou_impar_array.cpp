//Verifica se o Número é Par ou Ímpar
#include <iostream>//INCLUI A BIBLIOTECA
#include <time.h>
using namespace std;
int vetor [50];//declarar variável
main()
{
    srand(time(NULL));
	system("chcp 65001 ");
	cout<<"\n\t PROGRAMA VETOR ALEATÓRIO ";
    for (int i=0;i<=50;i++)
	{ 
	   vetor[i]=rand()%100;
	}
	cout<<"\n\n IMPRIMINDO O VETOR \n\n ";
    for (int i=0;i<=50;i++)
	{ 
	   cout<<"  "<< vetor[i];
	}
    
	cout<<"\n\n\n\n\n"; 
}