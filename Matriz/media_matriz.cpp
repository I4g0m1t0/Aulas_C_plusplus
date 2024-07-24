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
    float matriz[4][4];
	float media[4];
    // Pedindo ao usuário que insira as notas
    cout << "Insira as notas de cada aluno, por linha:" << endl;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            gotoxy(j * 10, i + 2); // Ajustando a posição de acordo com a linha e coluna
            cin >> matriz[i][j];
        }
    }
    
    for (int i = 0; i < 4; ++i) {
    	float soma = 0;
    	for (int j = 0; j < 4; ++j) {
            soma += matriz[i][j];
        }
        media[i] = soma/4; 
    }
    
    // Imprimindo a matriz
    gotoxy(0, 15); // Movendo o cursor para uma posição abaixo da matriz
    cout << "\nMatriz:" << endl;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
    
    for (int i=0; i<4; i++){
    	cout<<"\nAluno "<<i + 1<<": "<<media[i];
	}
}