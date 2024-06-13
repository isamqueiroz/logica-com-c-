#include <iostream>
using namespace std;

int main() {
    // Declaração da variável para armazenar o número fornecido pelo usuário
    int numero;

    // Solicitação do número inteiro ao usuário
    cout << "Digite um numero inteiro: ";
    cin >> numero;

    // Verifica se o número é positivo, negativo ou zero e exibe uma mensagem correspondente
    if (numero > 0) {
        cout << "O numero digitado eh positivo." << endl;
    } else if (numero < 0) {
        cout << "O numero digitado eh negativo." << endl;
    } else {
        cout << "O numero digitado eh zero." << endl;
    }

    return 0;
}
