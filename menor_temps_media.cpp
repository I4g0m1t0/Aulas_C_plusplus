/* 
FUP que leia um vetor de 10 temperaturas
Calcule a média das temperaturas

verifique quantas vezes a temperatura ficou menor que a média das temperaturas
*/
#include<iostream>

int const TAM=10; //constante para o Tamanho do Vetor

float temps[TAM]; //vetor
int i,temp_menor_media;
float acum,media;
main()
{
	using namespace std;
	system("chcp 65001");
    cout<<"\n Progama temperaturas menores que a média das temperaturas";
    cout<<"\n Informe "<<TAM<<" temperaturas. \n";
	for(i=0;i<TAM;i++) 
    {	
	    cout<<"\n Informe a "<<i+1<<"ª temperatura: ";
	    cin>>temps[i]; 
	    acum = acum + temps[i];
	    if((temps[i]<-273.13)){
	    	do{
		  		cout<<"\n\n ERRO DE DIGITAÇÃO" ;
		  		cout<<"\n Informe a "<<i+1<<"ª temperatura: ";
		        cin>>temps[i]; //é realizada as leituras das notas
		        acum = acum + temps[i];//acumulando as notas informadas
		    }while((temps[i]<-273.16));
		}
	}
		     
    media = acum / TAM;
      
	for(i=0;i<TAM;i++) 
    {
      	if (temps[i]<media)
      		temp_menor_media++; 
    }
    cout<<"\n A média das temperaturas informadas é: "<<media;
	cout<<"\n "<<temp_menor_media<<" temperaturas menores que a média";	 
        
	cout<<"\n\n\n\n ";	  
}
   
    
    
     
      
      
      
      
      
      
      
      
