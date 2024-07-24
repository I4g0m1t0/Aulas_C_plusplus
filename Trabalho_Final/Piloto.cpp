#include <iostream>
#include <string>

using namespace std;

const int LINHA = 12, COL = 7;

void inicializarMatriz(char matriz[LINHA][COL]) {
    for (int i = 0; i < COL; i++) {
        for (int j = 0; j < LINHA; j++) {
            matriz[i][j] = '-';
        }
    }
}

void exibirMatriz(char matriz[LINHA][COL]) {
    for (int i = 0; i < COL; i++) {
        for (int j = 0; j < LINHA; j++) {
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

    string dica1 = "Onde se mora";
    string dica2 = "Linguagem de programacao";
    string dica3 = "Chute";

    string palavra1, palavra2, palavra3;

    cout << "Digite a palavra para a dica '" << dica1 << "': ";
    cin >> palavra1;

    cout << "Digite a palavra para a dica '" << dica2 << "': ";
    cin >> palavra2;
    
    cout << "Digite a palavra para a dica '" << dica3 << "': ";
    cin >> palavra3;

    preencherPalavraHorizontal(matriz, "FIFA", 0, 4);
    preencherPalavraVertical(matriz, "FUTEBOL", 0, 6);
    preencherPalavraHorizontal(matriz, "CHUTEIRA", 1, 4);

    cout << "Palavras cruzadas:" << endl;
    exibirMatriz(matriz);

    return 0;
}
