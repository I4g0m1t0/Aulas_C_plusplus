 #include<iostream>

using namespace std;

int nega, par, pares, impar, impares, maior, menor, i, a;
 
main(){

	system("chcp 65001");//acentos
	
	
	for (i=0; i<10; i++){
		cout << "\n Número " << i + 1 << ": ";
        cin >> a;
        if(i==0){
        	maior = a;
        	menor = a;
		}
        if(a%2==0){
        	par++;
        	pares+=a;
		}
		if(a%2!=0){
			impar++;
			impares+=a;
		}
        if(a<0){
        	nega++;
		}
		if(a>maior){
			maior = a;
		}
		if(a<menor){
			menor = a;
		}
	}
	
	cout<<"\n A quantidade de pares é: "<<par;
	cout<<"\n A quantidade de ímpares é: "<<impar;
	cout<<"\n A soma dos pares é: "<<pares;
	cout<<"\n A média dos ímpares é: "<<impares/impar;
	cout<<"\n A quantidade de negativos é: "<<nega;
	cout<<"\n O maior valor é: "<<maior;
	cout<<"\n O menor valor é: "<<menor;
}
