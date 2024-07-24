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
	system("CHCP 65001");
    float matriz1[3][3];
    float matriz2[3][3];
    float matrizResultado[3][3];

    // Pedindo ao usuário que insira os valores
    cout << "Insira os valores da 1ª matriz, por linha:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            gotoxy(j * 10, i + 2); // Ajustando a posição de acordo com a linha e coluna
            cin >> matriz1[i][j];
        }
    }
    
    // Pedindo ao usuário que insira os valores
    cout << "Insira os valores da 2ª matriz, por linha:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            gotoxy(j * 10, i + 6); // Ajustando a posição de acordo com a linha e coluna
            cin >> matriz2[i][j];
        }
    }
    
    //Somando os valores
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            matrizResultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
    
    // Imprimindo a matriz
    gotoxy(0, 15); // Movendo o cursor para uma posição abaixo da matriz
    cout << "\nMatriz:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matrizResultado[i][j] << "\t";
        }
        cout << endl;
    }
  
}