#include <iostream>
using namespace std;
 main() {
    // Declarando a matriz
    float matriz[10][4];
    // Pedindo ao usuário que insira as notas
    cout << "Insira as notas da matriz 10x4:" << endl;
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << "Nota [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
    // Imprimindo a matriz
    cout << "\nMatriz:" << endl;
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}
