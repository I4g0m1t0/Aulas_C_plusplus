#include <iostream>
#include <time.h>//Biblioteca para o sorteio
#include <math.h>
using namespace std;

char formas[12] = { 'c', 'e', 'h', 'i', 'l', 'o', 'p', 'q', 'r', 't', 'u', 'z' }; 
/* c = círculo, e = triângulo equilátero, h = triângulo retângulo, i = triângulo isósceles, 
l = cilindro, o = cone, p = paralelograma, q = quadrado, 
r = retângulo, t = triângulo, u = cubo, z = trapézio. */
int forma_sorteada; //variável responsável pelo sorteio

//Variáveis para cálculo das formas:
float diametro, raio, area_circunferencia, area_total, lado, base, altura, hipot, perimetro, volume, area_superficie, base_m;

main()
{
	system("chcp 65001");
	
	cout<<"\n===============================================";
	cout<<"\n   Geometrix: Sorteando e Explorando Formas    ";
	cout<<"\n===============================================";
	
	srand(time(NULL));
	forma_sorteada = rand() % 12; //realizando o sorteio da forma
	
	//exibindo a forma sorteada
	if  (formas[forma_sorteada]=='c'){
		cout<<"\n\n Figura sorteada: Círculo\n\n";
		cout<<" Informe o valor do diâmetro do círculo: ";
		cin>>diametro;
		area_circunferencia = 3.14 * diametro;
		raio = diametro/2;
		area_total = 3.14 * pow(raio, 2);
		cout<<"\n Assumindo que π vale 3.14, temos que a área da circunferência vale "<<area_circunferencia<<"um² e a área do círculo vale "<<area_total<<"um²";
		
	}
  	if  (formas[forma_sorteada]=='e'){
    	cout<<"\n\n Figura sorteada: Triângulo equilátero\n\n";
    	cout<<" Informe o valor do lado do triângulo: ";
    	cin>>lado;
    	area_total = (pow(lado, 2) * 1.7) / 4;
    	cout<<"\n Assumindo a √3 como 1.7, temos que o perímetro do triângulo é igual a "<<lado*3<<"um² e a área é igual a "<<area_total<<"um²";
	}	
  	if  (formas[forma_sorteada]=='h'){
    	cout<<"\n\n Figura sorteada: Triângulo retângulo\n\n";
    	cout<<" Informe o valor da base do triângulo: ";
    	cin>>base;
    	cout<<" Informe o valor da altura do triângulo: ";
    	cin>>altura;
    	hipot = pow(base, 2) + pow(altura, 2);
    	perimetro = sqrt(hipot) + base + altura;
    	area_total = (base * altura) / 2;
    	cout<<"\n O valor do perímetro dessa figura, de acordo com as medidas fornecidas, é de "<<perimetro<<"um² e sua área é igual a "<<area_total<<"um²";
    	
    }
  	if  (formas[forma_sorteada]=='i'){
    	cout<<"\n\n Figura sorteada: Triângulo isósceles\n\n";
    	cout<<" Informe o valor da base do triângulo: ";
    	cin>>base;
    	cout<<" Informe o valor da altura do triângulo: ";
    	cin>>altura;
    	hipot = pow(base/2, 2) + pow(altura, 2);
    	perimetro = sqrt(hipot) * 2 + base;
    	area_total = (base * altura) / 2;
    	cout<<"\n O valor do perímetro dessa figura, de acordo com as medidas fornecidas, é de "<<perimetro<<"um² e sua área é igual a "<<area_total<<"um²";
	}
  	if  (formas[forma_sorteada]=='l'){
    	cout<<"\n\n Figura sorteada: Cilindro\n\n";
    	cout<<" Informe o valor do raio da base do cilindro: ";
    	cin>>raio;
    	cout<<" Informe o valor da altura do cilindro: ";
    	cin>>altura;
    	volume = 3.14 * pow(raio, 2) * altura;
    	area_superficie = (2 * 3.14 * pow(raio, 2)) + (2 * 3.14 * raio * altura);
    	cout<<"\n Assumindo que π vale 3.14, o valor do volume do cilindro vale "<<volume<<"um² e a área da superfície é igual a "<<area_superficie<<"um²";
	}
  	if  (formas[forma_sorteada]=='o'){
    	cout<<"\n\n Figura sorteada: Cone\n\n";
    	cout<<" Informe o valor do raio da base do cone: ";
    	cin>>raio;
    	cout<<" Informe o valor da altura do cone: ";
    	cin>>altura;
    	volume = (3.14 * pow(raio, 2) * altura) / 3;
    	cout<<"\n Assumindo que π vale 3.14, o valor do volume do cilindro vale "<<volume<<"um²";
	}
  	if  (formas[forma_sorteada]=='p'){
    	cout<<"\n\n Figura sorteada: Paralelograma\n\n";
    	cout<<" Informe o valor da base do paralelograma: ";
    	cin>>base;
    	cout<<" Informe o valor da altura do paralelograma: ";
    	cin>>altura;
    	cout<<" Informe o valor do lado do paralelograma: ";
    	cin>>lado;
    	perimetro = 2 * lado + 2 * base;
    	area_total = base * altura;
    	cout<<"\n O valor do perímetro desse paralelograma, de acordo com as medidas fornecidas, é de "<<perimetro<<"um² e sua área é igual a "<<area_total<<"um²";
	}
    if  (formas[forma_sorteada]=='q'){
    	cout<<"\n\n Figura sorteada: Quadrado\n\n";
    	cout<<" Informe o valor do lado do quadrado: ";
    	cin>>lado;
    	perimetro = lado * 4;
    	area_total = lado * lado;
    	cout<<"\n O valor do perímetro desse quadrado é de "<<perimetro<<"um² e sua área é igual a "<<area_total<<"um²";
	}
  	if  (formas[forma_sorteada]=='r'){
		cout<<"\n\n Figura sorteada: Retângulo\n\n";
		cout<<" Informe o valor da base do retângulo: ";
    	cin>>base;
    	cout<<" Informe o valor da altura do retângulo: ";
    	cin>>altura;
    	perimetro = 2 * altura + 2 * base ;
    	area_total = base * altura;
    	cout<<"\n O valor do perímetro desse retângulo é de "<<perimetro<<"um² e sua área é igual a "<<area_total<<"um²";
	}
	if  (formas[forma_sorteada]=='t'){
    	cout<<"\n\n Figura sorteada: Triângulo\n\n";
    	cout<<" Informe o valor da base do triângulo: ";
    	cin>>base;
    	cout<<" Informe o valor da altura do triângulo: ";
    	cin>>altura;
    	hipot = pow(base/2, 2) + pow(altura, 2);
    	perimetro = sqrt(hipot) * 2 + base;
    	area_total = base * altura;
    	cout<<"\n O valor do perímetro desse triângulo é de "<<perimetro<<"um² e sua área é igual a "<<area_total<<"um²";
	}
    if  (formas[forma_sorteada]=='u'){
    	cout<<"\n\n Figura sorteada: Cubo\n\n";
    	cout<<"Informe o valor do lado do cubo";
    	cin>>lado;
    	volume = pow(lado, 3);
    	cout<<"\n O valor do volume do cubo vale "<<volume<<"um²";
	}
  	if  (formas[forma_sorteada]=='z'){
		cout<<"\n\n Figura sorteada: Trapézio\n\n";
		cout<<" Informe o valor da base menor do trapézio: ";
    	cin>>base;
    	cout<<" Informe o valor da base maior do trapézio: ";
    	cin>>base_m;
    	cout<<" Informe o valor da altura do trapézio: ";
    	cin>>altura;
    	cout<<" Informe o valor do lado do trapézio: ";
    	cin>>lado;
    	perimetro = lado * 2 + base + altura;
    	area_total = (altura * (base_m + base)) / 2;
    	cout<<"\n O valor do perímetro desse trapézio é de "<<perimetro<<"um² e sua área é igual a "<<area_total<<"um²";
	}

}