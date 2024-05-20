/* Biblioteca C++
Autor: Iago
Data: 16/05/2024
*/

//Função que identifica um cacracter e faz a operação respectiva
float conta(float x, float y, char op) {
	switch(op) {
		case '+':
			return x + y;
			break;
		case '-':
			return x - y;
			break;
		case '*':
			return x * y;
			break;
		case '/':
			return x / y;
			break;
	}
}

//Função que soma
float soma(float x, float y){
	return(x + y);
}

//Função que subtrai
float sub(float x, float y){
	return(x - y);
}

//Função que multiplica
float mtpl(float x, float y){
	return(x * y);
}

//Função que divide
float div(float x, float y){
	return(x / y);
}