#include <iostream>
using namespace std;


int soma(int x, int y);
main(){
	system("CHCP 65001");
	cout<<"Informe um número: ";
	cin>>n1;
	cout<<"Informe outro número: ";
	cin>>n2;
	cout<<"O resultado é: "<<soma(n1, n2);
}
int soma(int x, int y){
	return(x + y);
}
