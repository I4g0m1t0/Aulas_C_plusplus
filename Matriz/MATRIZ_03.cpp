#include <iostream>
#include <windows.h>
using namespace std;
// Função para posicionar o cursor na tela
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
main() {
    // Declarando a matriz
    float matriz[10][4];
    // Pedindo ao usuário que insira as notas
    cout << "Insira as notas da matriz 10x4:" << endl;
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 4; ++j) {
            gotoxy(j * 10, i + 2); // Ajustando a posição de acordo com a linha e coluna
            cin >> matriz[i][j];
        }
    }
    // Imprimindo a matriz
    gotoxy(0, 15); // Movendo o cursor para uma posição abaixo da matriz
    cout << "\nMatriz:" << endl;
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}