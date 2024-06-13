#include <iostream>
using namespace std;

int main() {
    // Declaração da variável para armazenar a idade fornecida pelo usuário
    int idade;

    // Solicitação da idade ao usuário
    cout << "Digite a idade da pessoa: ";
    cin >> idade;

    // Verificação da idade e classificação
    if (idade >= 0 && idade <= 2) {
        cout << "Classificacao: Recem-Nascido" << endl;
    } else if (idade <= 12) {
        cout << "Classificacao: Crianca" << endl;
    } else if (idade <= 19) {
        cout << "Classificacao: Adolescente" << endl;
    } else if (idade <= 55) {
        cout << "Classificacao: Adulto" << endl;
    } else {
        cout << "Classificacao: Idoso" << endl;
    }

    return 0;
}