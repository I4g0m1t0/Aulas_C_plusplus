#include <iostream>
using namespace std;

int mtpl(int x, int y, int z);
int sub(int x, int y, int z);
int n1, n2, n3;

main(){
	system("CHCP 65001");
	cout<<"Informe um número: ";
	cin>>n1;
	cout<<"Informe outro número: ";
	cin>>n2;
	cout<<"Informe mais um número: ";
	cin>>n3;
	cout<<"O resultado da multiplicação é: "<<mtpl(n1, n2, n3);
	cout<<"\nO resultado da subtração é: "<<sub(n1, n2, n3);
}
int mtpl(int x, int y, int z){
	return(x * y * z);
}
int sub(int x, int y, int z){
	return(x - y - z);
}