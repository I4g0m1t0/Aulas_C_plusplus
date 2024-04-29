 //Pesquisa Aleatória
 
 #include<iostream>

using namespace std;

float i, pessoas, idade, altura, t_idade, t_altura, t_idadeM, t_alturaM, t_idadeF, t_alturaF, M, F, f170, m190, m170, maior_idade, menor_idade, maior_altura, menor_altura;
float maior_idadeM, menor_idadeF = 1000, maior_alturaM, menor_alturaF = 1000;
char sexo;
 
main(){

	system("chcp 65001");//acentos
	
	cout << "\n Informe a quantidade de pessoas: ";
	cin >> pessoas;
	
	for (i=0; i<pessoas; i++){
		cout << "\n\n Pessoa "<< i + 1<<":";
		cout << "\n\n Idade: ";
        cin >> idade;
        cout << "\n Sexo (M pra Masc ou F pra Fem): ";
        cin >> sexo;
        sexo = tolower(sexo);
        cout << "\n Altura em centímetros: ";
        cin >> altura;
        t_idade+=idade;
        t_altura+=altura;
        if(i==0){
        	maior_idade = idade;
        	menor_idade = idade;
        	maior_altura = altura;
        	menor_altura = altura;
		}
        if (sexo=='m'){
        	t_idadeM+=idade;
        	t_alturaM+=altura;
        	M++;
		}
		if(sexo=='f'){
			t_idadeF+=idade;
			t_alturaF+=altura;
			F++;
		}
		if((sexo=='f')&&(altura>170)){
			f170++;
		}
		if((sexo=='m')&&(altura>190)){
			m190++;
		}
		if((sexo=='m')&&(altura<170)){
			m170++;
		}
		if(idade>maior_idade){
			maior_idade=idade;
		}
		if(idade<menor_idade){
			menor_idade=idade;
		}
		if(altura>maior_altura){
			maior_altura=altura;
		}
		if(altura<menor_altura){
			menor_altura=altura;
		}
		if((altura>maior_alturaM)&&(sexo=='m')){
			maior_alturaM = altura;
		}
		if((idade>maior_idadeM)&&(sexo=='m')){
			maior_idadeM = idade;
		}
		if((altura<menor_alturaF)&&(sexo=='f')){
			menor_alturaF = altura;
		}
		if((idade<menor_idadeF)&&(sexo=='f')){
			menor_idadeF = idade;
		}
        
		
	}
	cout << "\n Média de idade: "<<t_idade/pessoas;
	cout << "\n Média de altura: "<<t_altura/pessoas;
	cout << "\n Média de idade das mulheres: "<<t_idadeF/F;
	cout << "\n Média de altura das mulheres: "<<t_alturaF/F;
	cout << "\n Média de idade dos homens: "<<t_idadeM/M;
	cout << "\n Média de altura dos homens: "<<t_alturaM/M;
	cout << "\n A quantidade de mulheres acima de 1,70 m: "<<f170;
	cout << "\n A quantidade de homens acima de 1,90 m: "<<m190;
	cout << "\n A quantidade de homens abaixo de 1,70 m: "<<m170;
	cout << "\n A maior idade geral é: "<<maior_idade;
	cout << "\n A menor idade geral é: "<<menor_idade;
	cout << "\n A maior altura geral é: "<<maior_altura;
	cout << "\n A menor altura geral é: "<<menor_altura;
	cout << "\n A maior idade dos homens é: "<<maior_idadeM;
	cout << "\n A maior altura dos homens é: "<<maior_alturaM;
	cout << "\n A menor idade das mulheres é: "<<menor_idadeF;
	cout << "\n A menor altura das mulheres é: "<<menor_alturaF;
}
