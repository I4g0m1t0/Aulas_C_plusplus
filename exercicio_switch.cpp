/*Faça um programa que tenha o seguinte Menu:

[1] - Visualizar um quadrado
[2] - Visualizar um retângulo
[3] - Visualizar um desenho de um gatinho
[4] - Visualizar uma pirâmide 
[5] - Visualizar um tabuleiro de Xadrez
[6] - FIM */

//Demonstração do uso do Switch

#include<iostream> //entrada e saida de dados
using namespace std;
int i, j, opcao;

main() 
{
 
  do{
  system("cls");
  system("chcp 65001");
  cout<<"\n\n Programa Exemplo SWITCH";
  cout<<"\n\n\n\n";
  cout<<"\n===============================================";
  cout<<"\nEscolha uma opção:";
  cout<<"\n===============================================";
  cout<<"\n";
  cout<<"\n [1] - Visualizar um quadrado";
  cout<<"\n [2] - Visualizar um retângulo";
  cout<<"\n [3] - Visualizar um desenho de um gatinho";
  cout<<"\n [4] - Visualizar uma pirâmide";
  cout<<"\n [5] - Visualizar um tabuleiro de Xadrez";
  cout<<"\n [6] - FIM\n ";
  cin>>opcao;
  
  switch (opcao)
  {
   case 1:{ for (i=0; i<=5;i++){
   				for(j=0; j<=5; j++){
   					cout<<" *";
				   }
				cout<<"\n";		
   		   }
   		   	system("pause");
			break;
          }
   case 2:{ for (i=0; i<=5;i++){
   				for(j=0; j<=3; j++){
   					cout<<" *";
				   }
				system("pause");
				cout<<"\n";		
   		   }
			break;
          }
   case 3:{ cout<<"\n GATINHO\n";
   	        cout << " /\\_/\\   \n" ;
			cout << "( o.o )  \n" ;
			cout << " > ^ <   \n" ;
			
			system("pause");
			break;
         }
   case 4:{ cout<<"\n  PIRÂMIDE\n";
   			for (int i = 1; i <= 6; i++) {
        	// Imprime os espaços em branco à esquerda
        		for (int j = 1; j <= 6 - i; j++) {
            		cout << " ";
        		}

        	// Imprime os asteriscos da pirâmide
        	for (int k = 1; k <= 2 * i - 1; k++) {
            	cout << "*";
        	}
        	cout << "\n"; 
    		}   
			system("pause");		
			break;
   		  }
   case 5:{  for (int i = 0; i < 8; i++) {
        // Loop para iterar pelas colunas do tabuleiro
        for (int j = 0; j < 16; j++) {
            // Se a soma dos índices da linha e da coluna for par, imprime um espaço em branco
            // Se for ímpar, imprime um caractere representando uma casa do tabuleiro
            if ((i + j) % 2 == 0) {
                cout << " ";
            } else {
                cout << "#";
            }
        }
        system("pause");
        cout << "\n"; // Quebra de linha após cada linha do tabuleiro
    }		
	break;
   }
   case 6:{cout<<"\n Obrigada por usar esse lindo programa\n\n";
   	     	break;
          }
          
      
   default: {cout<<"\n Escolha certo da Próxima Vez\n\n";
   				system("pause");
   	        	break;
            }
}//FECHA O SWITCH
}while (opcao != 6);
   cout<<"\n\n\n\n";  
}