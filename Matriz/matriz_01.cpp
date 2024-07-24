#include <iostream>
using namespace std;
main() {
    // Declarando e inicializando a matriz
    float matriz[10][4] = {
        {1.1, 2.2, 3.3, 4.4},
        {5.5, 6.6, 7.7, 8.8},
        {9.9, 4.1, 5.1, 1.2},
        {3.1, 1.4, 5.5, 6.6},
        {7.7, 8.1, 9.9, 0.2},
        {1.2, 2.2, 2.3, 4.2},
        {5.2, 6.2, 7.7, 8.2},
        {9.9, 3.3, 3.3, 2.3},
        {3.3, 4.3, 5.5, 6.3},
        {7.7, 8.8, 9.7, 4.4}
    };
    // Imprimindo a matriz
    cout << "Matriz:" << endl;
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}
