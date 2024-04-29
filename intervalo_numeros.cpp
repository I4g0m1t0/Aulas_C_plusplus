/* FUP que imprima uma torre invertida*/
 
#include<iostream>

using namespace std;

int n1, n2, i;
 
main(){

	system("chcp 65001");//acentos

	cout<<"\n Digite um número: ";
	cin>>n1;
	cout<<"\n Digite outro número: ";
	cin>>n2;

	
	if(n1==n2){
		cout<<"\n Pela mor de deus, cara, qui qui oce tá fazendo?";
	}
	else{
		if(n1>n2){
		cout<<"\n Os números contidos entre "<<n1<<" e "<<n2<<" são:";
		for ( i = n1; i>=n2; i--){
			cout<<" "<<i;
		}
	}
	else{
		if(n1<n2){
			cout<<"\n Os números contidos entre "<<n1<<" e "<<n2<<" são:";
			for ( i = n1; i<=n2; i++){
				cout<<" "<<i;
			}	
		}
	}
	}
	
}
