#include <iostream>
#include <time.h>
#include <math.h>
#include <iomanip>
#include <conio.h>

using namespace std;

const int LINHA = 7, COL = 12;

void inicializarMatriz(char matriz[LINHA][COL]) {
    for (int i = 0; i < LINHA; i++) {
        for (int j = 0; j < COL; j++) {
            matriz[i][j] = '-';
        }
    }
}

void exibirMatriz(char matriz[LINHA][COL]) {
    for (int i = 0; i < LINHA; i++) {
        for (int j = 0; j < COL; j++) {
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
	system("CHCP 65001 > null");
	system ("CLS");
    char matriz[LINHA][COL];
    inicializarMatriz(matriz);
    
    string palavraChave = "FUTEBOL";
    preencherPalavraVertical(matriz, palavraChave, 0, 7); //Palavra Chave na localização correta
    preencherPalavraHorizontal(matriz, "1", 0, 4);
    preencherPalavraHorizontal(matriz, "2", 1, 4);
    preencherPalavraHorizontal(matriz, "3", 2, 2);
    preencherPalavraHorizontal(matriz, "4", 3, 5);
    preencherPalavraHorizontal(matriz, "5", 4, 6);
    preencherPalavraHorizontal(matriz, "6", 5, 1);
    preencherPalavraHorizontal(matriz, "7", 6, 4);

	cout << "\n ========================================= \n";
	cout << "\n\t Programa Cruzadinha \n";
	cout << "\n ========================================= \n\n";
	exibirMatriz(matriz);
	string palavra1, palavra2, palavra3, palavra4, palavra5, palavra6, palavra7;
	int opcao, ponto10 = 10, ponto5 = 5, ponto3 = 3;
	string dica[21] = {
	"Maior entidade regulamentadora do futebol.", "Existe um jogo com esse nome.", "O jogo mudou de nome em 2024.",
	"Chute.", "Equipamento obrigatório.", "Fica no pé.",
	"Partida entre dois clubes.", "É um tipo de clima.", "Partida amigável.",
	"Já ganhou bola de ouro.", "Já ganhou copa do mundo.", "É Argentino.",
	"É um país.", "Tem branco na bandeira.", "Ganhou 5 copas.",
	"Real Madrid.", "Cristiano Ronaldo.", "Competição europeia.",
	"Órgão humano.", "É apelido.", "Ganhou 3 copas do mundo."
	};
	
	do {
		cout << "\n [1] Preencher a 1ª linha";
		cout << "\n [2] Preencher a 2ª linha";
		cout << "\n [3] Preencher a 3ª linha";
		cout << "\n [4] Preencher a 4ª linha";
		cout << "\n [5] Preencher a 5ª linha";
		cout << "\n [6] Preencher a 6ª linha";
		cout << "\n [7] Preencher a 7ª linha";
		cout << "\n [8] Finaliziar a cruzadinha";
		
		cout << "\n\n Escolha a linha que deseja preencher: ";
		cin >> opcao;
		
		switch (opcao) {
			case 1: {
				cout << "\n\n 1ª dica: " << dica[0];
				cout << "\n\n Digite a palavra: ";
				cin >> palavra1;
				
				if (palavra1 == "FIFA") {
					cout << "\n Parabéns, você acertou!";
					cout << "\n\n +" << ponto10 << " pontos";
				}
				
				//Para chamar a segunda dica
				else{
					cout << "\n Resposta errada :( \n";
					cout << "\n\n 2ª dica: " << dica[1];
					cout << "\n Tente novamente: ";
					cin >> palavra1;
				}
					if (palavra1 == "FIFA") {
						cout << "\n Parabéns, você acertou!";
						cout << "\n\n +" << ponto5 << " pontos";
					}
				
				//Para chamar a terceira dica
				else{
					cout << "\n Resposta errada :( \n";
					cout << "\n\n 3ª dica: " << dica[2];
					cout << "\n Tente novamente: ";
					cin >> palavra1;
				}
					if (palavra1 == "FIFA") {
						cout << "\n Parabéns, você acertou!";
						cout << "\n\n +" << ponto3 << " pontos";
					}
				
				//Loop infinito para errar até acertar
				else{
					do{
					cout << "\n Resposta errada :( \n";
					cout << "\n Tente novamente: ";
					cin >> palavra1;
					} while (palavra1 != "FIFA");
				}
					if (palavra1 == "FIFA") {
						cout << "\n Parabéns, você acertou!";
						cout << "\n\n +" << ponto3 << " pontos";
					}
				}
				
				system ("CLS");
				break;
			}
		} while (opcao != 8);
	
	
    /*cout << "\n Digite a palavra para a dica '" << "': ";
    cin >> palavra1;*/

	
    /*preencherPalavraHorizontal(matriz, palavra1, 0, 5);
    
    preencherPalavraHorizontal(matriz, palavra3, 1, 5);*/

	/*cout << "Palavras cruzadas:" << endl;
    exibirMatriz(matriz);*/

    return 0;
} // FIM
