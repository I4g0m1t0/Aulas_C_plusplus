#include<iostream> //entrada e saida de dados
using namespace std;
int n;

main() 
{
int soma = 0;
for (int n = 2; n < 999; n += 2)
{
  soma = soma + n;
}
cout << "O valor da soma e: " << soma;	
}