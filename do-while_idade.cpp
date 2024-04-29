//Demonstração do uso do Switch

#include<iostream> //entrada e saida de dados
using namespace std;
int i, idade, acumula;
float media;

main() 
{
  system("chcp 65001");
  cout<<"\n\n Programa Exemplo Do-While";
  
  for(i=0; i<=2; i++){
  	do{
  		cout<<"\n\n Digite a idade da "<<i+1<<"ª pessoa: ";
  		cin>>idade;
  		if ((idade<0)||(idade>145)){
  			cout<<"\n\n Ateção idade errada";
  			cout<<"\n\n Digite novamente a idade da "<<i+1<<"ª pessoa: ";
  			cin>>idade;
		  }
	  }while ((idade<0)||(idade>145));
	  
	  acumula = acumula + idade;
  }
  
  media = acumula / i;
  
  cout<<"\n\n A médida das idades é: "<<media;
}