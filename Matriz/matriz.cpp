#include <iostream>
using namespace std;
int const TAM = 3;
int mat[TAM][TAM], i, j;

main(){
	cout<<"\n\n Matriz \n\n";
	
	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			cin>>mat[i][j];
		}
	}
	cout<<"\n\n";
}