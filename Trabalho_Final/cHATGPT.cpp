#include <iostream>
#include <string>

using namespace std;

const int LINHA = 7, COL = 13;

void inicializarMatriz(char matriz[LINHA][COL]) {
    for (int i = 0; i < LINHA; i++) {   // Corrigir a ordem dos loops
        for (int j = 0; j < COL; j++) {
            matriz[i][j] = '-';
        }
    }
}

void exibirMatriz(char matriz[LINHA][COL]) {
    for (int i = 0; i < LINHA; i++) {   // Corrigir a ordem dos loops
        for (int j = 0; j < COL; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

void preencherPalavraHorizontal(char matriz[LINHA][COL], string palavra, int linha, int coluna) {
    for (int i = 0; i < palavra.length(); i++) {
        matriz[linha][coluna + i] = palavra[i];
    }
}

void preencherPalavraVertical(char matriz[LINHA][COL], string palavra, int linha, int coluna) {
    for (int i = 0; i < palavra.length(); i++) {
        matriz[linha + i][coluna] = palavra[i];
    }
}

int main() {
    char matriz[LINHA][COL];
    inicializarMatriz(matriz);
    
    string palavraChave = "FUTEBOL";
    preencherPalavraVertical(matriz, palavraChave, 0, 7); //Palavra Chave na localização correta
    preencherPalavraHorizontal(matriz, "1", 0, 4);
    preencherPalavraHorizontal(matriz, "2", 1, 4);
    preencherPalavraHorizontal(matriz, "3", 2, 2);
    preencherPalavraHorizontal(matriz, "4", 3, 5);
    preencherPalavraHorizontal(matriz, "5", 4, 6);
    preencherPalavraHorizontal(matriz, "6", 5, 1);
    preencherPalavraHorizontal(matriz, "7", 6, 4);

	cout<<"\nPrograma de Cruzadinha: \n";
	exibirMatriz(matriz);
	
	string palavra1, palavra2, palavra3, palavra4, palavra5, palavra6, palavra7;

    cout << "Digite a palavra para a dica '" << "': ";
    cin >> palavra1;

	
    /*preencherPalavraHorizontal(matriz, palavra1, 0, 5);
    
    preencherPalavraHorizontal(matriz, palavra3, 1, 5);*/

    cout << "Palavras cruzadas:" << endl;
    exibirMatriz(matriz);

    return 0;
}
