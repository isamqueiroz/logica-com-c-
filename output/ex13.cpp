#include <iostream>
using namespace std;

int main() {
    // Declaração da variável para armazenar o número fornecido pelo usuário
    int numero;

    // Solicitação do número ao usuário
    cout << "Digite um numero: ";
    cin >> numero;

    // Verificação se o número é par e exibição do resultado apenas se for par
    if (numero % 2 == 0) {
        cout << "O numero digitado eh: " << numero << endl;
    }

    return 0;
}