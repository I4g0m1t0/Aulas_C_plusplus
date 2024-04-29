#include <iostream>

int main() {
    int tamanho;
    std::cout << "Digite o tamanho do lado do quadrado: ";
    std::cin >> tamanho;

    // Loop para imprimir as linhas do quadrado
    for (int i = 0; i < tamanho; i++) {
        // Loop para imprimir os caracteres em cada linha
        for (int j = 0; j < tamanho; j++) {
            std::cout << "* ";
        }
        std::cout << std::endl; // Quebra de linha após cada linha do quadrado
    }

    return 0;
}
