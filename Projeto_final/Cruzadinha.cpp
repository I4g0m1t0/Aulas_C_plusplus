// Programa feito por Iago Rech Tramontin e Natanael Beloqui de Barros
#include <iostream>
#include <string>
#include <windows.h> // Para usar Sleep()
#include "Biblioteca.h" // Para usar a biblioteca

using namespace std;

int main() {
    system("CHCP 65001 > null");
    system("CLS");

    // Definição das palavras para a adivinhação
    string palavrasMaiusc[] = {"FIFA", "CHUTEIRA", "AMISTOSO", "MESSI", "BRASIL", "CHAMPIONS", "DRIBLE"};
    string palavrasMinusc[] = {"fifa", "chuteira", "amistoso", "messi", "brasil", "champions", "drible"};
    string palavrasCaps[] = {"Fifa", "Chuteira", "Amistoso", "Messi", "Brasil", "Champions", "Drible"};

    // Definição das dicas para cada palavra
    string dica[21] = {
        "Maior entidade regulamentadora do futebol.", "Existe um jogo com esse nome.", "O jogo mudou de nome em 2024.",
        "Chute.", "Equipamento obrigatório.", "Fica no pé.",
        "Partida entre dois clubes.", "É um tipo de clima.", "Partida amigável.",
        "Já ganhou bola de ouro.", "Já ganhou copa do mundo.", "É Argentino.",
        "É um país.", "Tem branco na bandeira.", "Ganhou 5 copas.",
        "Real Madrid.", "Cristiano Ronaldo.", "Competição europeia.",
        "Ginga.", "1 contra 1.", "Ronaldinho."
    };

    int pontos[] = {10, 5, 3}; // Pontos correspondentes às tentativas
    int pontuacao = 0; // Somar os pontos
    string palavra1; // Usada para comparar o que foi digitado com a palavra que deveria ser escrita

    // Matriz da cruzadinha
    char matriz[LINHA][COL];
    inicializarMatriz(matriz);

    // Preenchimento das palavras na matriz da cruzadinha
    preencherPalavraHorizontal(matriz, "1----", 0, 5);
    preencherPalavraHorizontal(matriz, "2--------", 1, 5);
    preencherPalavraHorizontal(matriz, "3--------", 2, 3);
    preencherPalavraHorizontal(matriz, "4-----", 3, 6);
    preencherPalavraHorizontal(matriz, "5------", 4, 7);
    preencherPalavraHorizontal(matriz, "6---------", 5, 1);
    preencherPalavraHorizontal(matriz, "7------", 6, 3);
    preencherPalavraVertical(matriz, "FUTEBOL", 0, 8); // Palavra chave na posição correta
    preencherPalavraVertical(matriz, "       ", 0, 0); // Para estilizar um pouco

    // Definindo localização das palavras
    int linha[] = {0, 1, 2, 3, 4, 5, 6};
    int coluna[] = {6, 6, 4, 7, 8, 2, 4};
    
    // Cabeçalho
    cout << "\n ========================================= \n";
	cout << "\n\t Programa Cruzadinha \n";
	cout << "\n ========================================= \n\n";
	exibirMatriz(matriz);

    // Loop para cada palavra do jogo de adivinhação
    for (int i = 0; i < 7; ++i) {
    	cout << "\n Pontuação atual: " << pontuacao << " pontos";
        cout << "\n\n ========================================= \n";
        cout << "\n Adivinhe a " << i + 1 << "ª palavra: ";
        
		// Apresenta as três dicas para a palavra atual
        for (int j = 0; j < 3; ++j) {
            cout << "\n\n " << j+1 << "ª dica: " << dica[i*3 + j];
            cout << "\n\n Digite a palavra: ";
            cin >> palavra1;

            // Verifica se a palavra digitada está correta
            if (palavra1 == palavrasMaiusc[i] || palavra1 == palavrasMinusc[i] || palavra1 == palavrasCaps[i]) {
                cout << "\n Parabéns, você acertou!";
                cout << "\n\n +" << pontos[j] << " pontos";
                pontuacao += pontos[j]; // Somando os pontos para posterior exibição da pontuação
                preencherPalavraHorizontal(matriz, palavrasMaiusc[i], linha[i], coluna[i]); // Preenche na posição correta
                break; // Sai do loop interno se a palavra for correta
            } else {
                cout << "\n Resposta errada :(\n";
                // Se for a última tentativa e ainda errada, pede para tentar novamente
                if (j == 2) {
                    do {
                        cout << "\n Tente novamente: ";
                        cin >> palavra1;
                    } while (palavra1 != palavrasMaiusc[i] && palavra1 != palavrasMinusc[i] && palavra1 != palavrasCaps[i]);
                    cout << "\n Parabéns, você acertou!";
                    cout << "\n\n +" << pontos[j] << " pontos";
                    pontuacao += pontos[j]; // Somando os pontos para posterior exibição da pontuação
                    preencherPalavraHorizontal(matriz, palavrasMaiusc[i], linha[i], coluna[i]); // Preenche na posição correta
                }
            }
        }
        Sleep(2000); // Delay de 2 segundos após acertar a palavra
        system("CLS"); // Limpa a tela para não ficar poluída

        // Exibe a cruzadinha após cada palavra adivinhada
        cout << "\n ========================================= \n";
        cout << "\n\t Programa Cruzadinha \n";
        cout << "\n ========================================= \n\n";
        exibirMatriz(matriz); // Exibe a matriz atualizada
    }
    cout << "\n Pontuação final: " << pontuacao << " pontos"; // Exibe a pontuação final após o fim do jogo
    cout << "\n\n ========================================= ";

    return 0;
}