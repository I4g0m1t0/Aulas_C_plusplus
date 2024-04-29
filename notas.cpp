 #include<iostream>

using namespace std;

int n1, n2, soma, i, a, b, c, media;
 
main(){

	system("chcp 65001");//acentos
	
	
	for (i=0; i<10; i++){
		cout << "\n Nota 1: ";
        cin >> n1;
        cout << "\n Nota 2: ";
        cin >> n2;
        media = (n1 + n2)/2;
        soma+=media;
        if (media>=60){
        	a++;
		}
		if ((media<60)&&(media>=40)){
			b++;
		}
		if (media<40){
			c++;
		}
		
	}
	cout << "\n Alunos aprovados: "<<a;
	cout << "\n Alunos em recuperação: "<<b;
	cout << "\n Alunos reprovados: "<<c;
	cout << "\n Média geral: "<<media/10;
}
