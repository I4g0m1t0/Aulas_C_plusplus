#include <iostream>
#include <windows.h>
using namespace std;

// variáveis globais
int const TAM = 10;
float notas[TAM]; // vetor chamado notas e TAM é usado
                  // gerenciar o tamanho do vetor
float media, maior, menor, nota; // variáveis usadas para
                                 // enviar/receber os dados da função
int qtde_menor_7; // aqui é inteiro pq é um contador

//Protótipo das Funções
float verificaNota(float nota); //verificar a nota informada
float mediaVetor(float notas[], int TAM); //calcula a média
int verificarNotasMenor_7(float notas[], int TAM); //conta notas menores
float verificarMenorNota(float notas[], int TAM); //retorna a MENOR nota
float verificarMaiorNota(float notas[], int TAM); //retorna a MAIOR nota


main() {
	system("chcp 65001"); //para usar acentuação
	cout<<"\n\n\t\t **** VETORES NOTAS *** \n\n";
	
	for (int i=0;i<TAM;i++)
	{
	    cout<<"\n Informe a "<<i+1<<"a nota: ";
	    cin>>nota;
	    notas[i] = verificaNota(nota);
	}

	media = mediaVetor(notas, TAM);

    qtde_menor_7 = verificarNotasMenor_7(notas, TAM);
	cout << "\n A qtde de notas menores que 7: " << qtde_menor_7;
	
	cout<<"\n A maior nota é: "<<verificarMaiorNota(notas,TAM);

	cout<<"\n A menor nota é: "<<verificarMenorNota( notas, TAM);
}

//==============================
// FUNÇÃO MÉDIA
//==============================
float mediaVetor(float notas[], int TAM)
{
    float media, acum=0;
    for (int i=0; i<TAM; i++)
    {
        acum = acum + notas[i];
    }
    media=acum/TAM;
    return (media); //retorna a média calculada
}

//FUNÇÃO QTDE NOTAS MENORES QUE SETE
int verificarNotasMenor_7(float notas[], int TAM) {
    int cont_menor_7 = 0;
    for (int i = 0; i < TAM; i++) {
        if (notas[i] < 7)
            cont_menor_7++; // conta notas menores de 7
    }
    return (cont_menor_7); // retorna a quantidade de notas menores que 7
}

//=================================================
//FUNÇÃO MAIOR NOTA VETOR
//=================================================
float verificarMaiorNota(float notas[], int TAM)
{
    float maior;
    for (int i=0; i<TAM; i++)
    {
        if (i==0)
            maior = notas[i];
        if (notas[i]>maior)
            maior = notas[i];
    }
    return (maior);
}

//==============================
//FUNÇÃO MENOR NOTA VETOR
//==============================
float verificarMenorNota(float notas[], int TAM) {
    float menor;
    for (int i = 0; i < TAM; i++) {
        if (i == 0) // será executado uma vez só
            menor = notas[i]; // menor será inicializado
        if (notas[i] < menor)
            menor = notas[i];
    }
    return (menor);
}

//==============================
//FUNÇÃO ENTRA INVÁLIDA NO VETOR
//==============================
float verificaNota(float nota)
{
    do
    {
        if ((nota<0)||(nota>10))
        {
            cout<<"\n ERRO - Informe a nota novamente \n";
            cin>>nota;
        }
    } while ((nota<0)||(nota>10));
    return (nota);
}
