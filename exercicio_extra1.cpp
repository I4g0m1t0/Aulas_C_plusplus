#include <iostream>
#include <iomanip> // Para definir a precisão das casas decimais
using namespace std;

//1. FUP que peça 5 números. Imprima: a soma, a subtração, o produto e a divisão entre esses números. Atenção: como resultado mostre obrigatoriamente 2 casas decimais como resultado.

int main() {
	system("chcp 65001"); //Insere caracteres especiais

    // Declarando variáveis para armazenar os números
    double numeros[5];
    
    // Solicitando ao usuário que insira os números
    cout << "Digite cinco números:\n";
    for (int i = 0; i < 5; ++i) {
        cout << "Número " << i + 1 << ": ";
        cin >> numeros[i];
    }
    
    // Calculando a soma
    double soma = 0;
    for (int i = 0; i < 5; ++i) {
        soma += numeros[i];
    }
    
    // Calculando a subtração
    double subtracao = numeros[0];
    for (int i = 1; i < 5; ++i) {
        subtracao -= numeros[i];
    }
    
    // Calculando o produto
    double produto = 1;
    for (int i = 0; i < 5; ++i) {
        produto *= numeros[i];
    }
    
    // Calculando a divisão
    double divisao = numeros[0];
    for (int i = 1; i < 5; ++i) {
        divisao /= numeros[i];
    }
    
    // Imprimindo os resultados com 2 casas decimais
    cout << fixed << setprecision(2);
    cout << "\nSoma: " << soma << endl;
    cout << "Subtração: " << subtracao << endl;
    cout << "Produto: " << produto << endl;
    cout << "Divisão: " << divisao << endl;
    
    return 0;
}
