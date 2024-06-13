#include <iostream>
using namespace std;

int main() {
    // Declaração das variáveis para armazenar as notas do aluno
    float nota1, nota2, nota3, nota4, media;

    // Solicitação das notas ao usuário
    cout << "Digite a primeira nota: ";
    cin >> nota1;
    cout << "Digite a segunda nota: ";
    cin >> nota2;
    cout << "Digite a terceira nota: ";
    cin >> nota3;
    cout << "Digite a quarta nota: ";
    cin >> nota4;

    // Cálculo da média aritmética das notas
    media = (nota1 + nota2 + nota3 + nota4) / 4.0;

    // Verificação da situação do aluno e exibição do resultado
    if (media >= 7.0) {
        cout << "Media: " << media << " - APROVADO" << endl;
    } else if (media >= 5.0 && media < 7.0) {
        cout << "Media: " << media << " - RECUPERACAO" << endl;
    } else {
        cout << "Media: " << media << " - REPROVADO" << endl;
    }

    return 0;
}