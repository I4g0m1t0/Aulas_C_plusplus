//Demonstração do uso do Switch

#include<iostream> //entrada e saida de dados
using namespace std;
int i,opcao;

main() 
{
 
  do{
  system("chcp 65001");
  cout<<"\n\n Programa Exemplo SWITCH";
  cout<<"\n\n\n\n";
  cout<<"\n===============================================";
  cout<<"\nEscolha uma opção:";
  cout<<"\n===============================================";
  cout<<"\n";
  cout<<"\n [1] - Lista de Números de 0 a 100";
  cout<<"\n [2] - Lista de Números de Pares";
  cout<<"\n [3] - Lista de Números de ÍMPARES";
  cout<<"\n [4] - FIM \n";
  cin>>opcao;
  
  switch (opcao)
  {
   case 1:{ for (i=0; i<=100;i++)
              cout<<"  "<<i;
   	        break;
          }
   case 2:{for (i=0; i<=100;i++)
           {
           	if (i%2==0)
           	  cout<<"  "<<i;
            }
   	      break;
         }
   case 3:{ cout<<"\n NÚMEROS ÍMPARES";
   	        for (i=0; i<=100;i++)
             {
           	   if (i%2!=0)
           	     cout<<"  "<<i;
             }
   	        break;
         }
   case 4:{cout<<"\n Obrigada por usar esse lindo programa";
   	     	break;
          }
          
      
   default: {cout<<"\n Escolha certo da Próxima Vez";
   	        	break;
            }
}//FECHA O SWITCH
}while (opcao != 4);
   cout<<"\n\n\n\n";  
}