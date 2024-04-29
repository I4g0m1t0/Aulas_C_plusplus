/*
Que Lê a temperatura de uma semana.
Verifica a menor temperatura e informa 
qual o dia da semana que ficou mais frio.
*/
#include <iostream>
#include <ctype.h>
#include <time.h>

int const TAM = 7;

using namespace std;
 
float temperatura[TAM];

char dia[7]= {'D','S','T','Q','U','X','B'};
char mes[12]= {'J','F','M','A','I','U','H','G','S','O','N','D'};
int i,mes_sorteado;
float menor;
char dia_frio;// Para o dia mais frio
main()
{
  system("chcp 65001");
  
  srand(time(NULL));
  mes_sorteado= rand() % 12;
  system("color B");
  cout<<"\n\n\t\t ****  Programa Dia Mais FRIO da Semana   *** ";
  cout<<"\n\n  Mês sorteado: ";
  if  (mes[mes_sorteado]=='J')
       cout<<"  Janeiro";
  if  (mes[mes_sorteado]=='F')
       cout<<"  Fevereiro";
  if  (mes[mes_sorteado]=='M')
       cout<<"  Março";
  if  (mes[mes_sorteado]=='A')
       cout<<"  Abril";
  if  (mes[mes_sorteado]=='I')
       cout<<"  Maio";
  if  (mes[mes_sorteado]=='U')
       cout<<"  Junho";
  if  (mes[mes_sorteado]=='H')
       cout<<"  Julho";
       if  (mes[mes_sorteado]=='G')
       cout<<"  Agosto";
  if  (mes[mes_sorteado]=='S')
       cout<<"  Setembro";
  if  (mes[mes_sorteado]=='O')
       cout<<"  Outubro";
  if  (mes[mes_sorteado]=='N')
       cout<<"  Novembro";
  if  (mes[mes_sorteado]=='D')
       cout<<"  Dezembro";
  
       
       
       
  for (i=0;i<TAM;i++)
  {
  	 cout<<"\n Informe a Temperatura do "<< i+1 <<" º dia da semana:  ";
  	 cin>>temperatura[i];
  	 
  	 if (i==0)//Inicializando as variáveis
  	 {
  	 	menor = temperatura[i];
  	 	dia_frio= dia[i];
	 }
	 if (temperatura[i]<menor)
	 {
	 	menor = temperatura[i];//Achando a menor temperatura
  	 	dia_frio = dia[i]; //Achando o dia da semana mais frio
	 }
  }
  cout<<"\n\n\n A temperatura mais fria foi:  "<<menor<<" º Celsius";
  cout<<"\n\n\n A temperatura mais fria ocorreu:  ";
  if (dia_frio=='D')
   	 cout<<" no Domingo "; 
  if (dia_frio=='S')
     cout<<" na Segunda "; 
  if (dia_frio=='T')
     cout<<" na Terça "; 
  if (dia_frio=='Q')
     cout<<" na Quarta "; 
  if (dia_frio=='U')
     cout<<" na Quinta "; 
  if (dia_frio=='X')
   	 cout<<" na Sexta "; 
  if (dia_frio=='B')
     cout<<" no Sábado "; 
  cout<<"\n\n\n\n\n"; 
}
