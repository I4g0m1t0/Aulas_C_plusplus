 #include<iostream>

using namespace std;

int n1, n2, soma, i, a, b, c, media, alunos;
 
main(){

	system("chcp 65001");//acentos
	
	cout << "\n Informe a quantidade de alunos: ";
	cin >> alunos;
	
	for (i=0; i<alunos; i++){
		cout << "\n\n Aluno "<< i + 1<<":";
		cout << "\n\n Nota 1: ";
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
	cout << "\n Média geral: "<<soma/alunos;
}
