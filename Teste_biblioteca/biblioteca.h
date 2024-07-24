#include <iostream>
#include <string>

// Definições de cores ANSI
#define RESET   "\033[0m"
#define RED     "\033[31m"

using namespace std;

// Definindo o tamanho da matriz
const int LINHA = 7, COL = 14;

void inicializarMatriz(char matriz[LINHA][COL]) {
    for (int i = 0; i < LINHA; i++) {
        for (int j = 0; j < COL; j++) {
            matriz[i][j] = ' ';
        }
    }
}

void exibirMatriz(char matriz[LINHA][COL]) {
    for (int i = 0; i < LINHA; i++) {
        for (int j = 0; j < COL; j++) {
            // Verifica se estamos na posição da palavra "FUTEBOL"
            if (j == 8 && i >= 0 && i < 7) {
                cout << RED << matriz[i][j] << RESET << " ";
            } else {
                cout << matriz[i][j] << " ";
            }
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