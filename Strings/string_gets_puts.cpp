#include <iostream>
#include <string>
using namespace std;

main(){
	system("chcp 65001");
	char nome[100];
	cout << "Informe um string: ";
	gets(nome); //get string
	fflush(stdin); //limpa buffer
	cout << "\n\n";
	puts(nome); //put string
}