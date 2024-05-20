#include <iostream>
#include<ctype.h> //Js do c++
using namespace std;

int vogal(char letra);

main(){
	char letra;
	
	system("chcp 65001");
	cout<<"Digite uma letra: ";
	cin>>letra;
	letra = toupper(letra);
	if (vogal(letra) == 0){
	 	cout<<"ZERO";	
	}
	if (vogal(letra) == 1){
		cout<<"UM";
	}
		
}
int vogal(char letra){
	if((letra=='A') || (letra=='E') || (letra=='I') || (letra=='O') || (letra=='U')){
		return(0);
	}
	else{
		return(1);
	}
	cout<<"\n\n\n";
}