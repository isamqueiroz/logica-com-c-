#include <iostream> 
using namespace std;

int main ()
{
// criação de variáveis com valores pré definidos
int numero1 = 10;
int numero2 = 20;

//entrada
// cria duas variáveis sem valor inicial

//Pede pro usuario digitar os numeros
cout << "informe o primeiro numero\n";
cin >> numero1;

cout << "informe o segundo numero\n";
cin >> numero2;

// processamento
// calcula os numeros informados
int resultado = numero1 + numero2;

// saida
// Exibe o texto com o resultado
cout << "Resultado é: " << resultado << "\n";
}