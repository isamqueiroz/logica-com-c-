#include <iostream>
using namespace std;

int main() {
    // Declaração das variáveis para armazenar os valores fornecidos pelo usuário
    int numero1, numero2;

    // Solicitação dos dois números ao usuário
    cout << "Digite o primeiro numero: ";
    cin >> numero1;
    cout << "Digite o segundo numero: ";
    cin >> numero2;

    // Verificação para determinar o maior número e exibição do resultado
    if (numero1 > numero2) {
        cout << "O maior numero digitado eh: " << numero1 << endl;
    } else if (numero2 > numero1) {
        cout << "O maior numero digitado eh: " << numero2 << endl;
    } else {
        cout << "Os numeros digitados sao iguais." << endl;
    }

    return 0;
}