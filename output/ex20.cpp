#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Declaração das variáveis para armazenar os dados do funcionário
    string nome, cargo;
    int codigo;
    float salario, percentual, salarioAumentado;

    // Solicitação dos dados ao usuário
    cout << "Digite o nome do funcionario: ";
    cin >> nome;
    cout << "Digite o salario do funcionario: ";
    cin >> salario;
    cout << "Digite o codigo correspondente ao cargo (1 a 5): ";
    cin >> codigo;

    // Verificação do código do cargo e cálculo do aumento de acordo com a tabela
    switch (codigo) {
        case 1:
            cargo = "Escriturario";
            percentual = 0.50;
            break;
        case 2:
            cargo = "Secretario";
            percentual = 0.35;
            break;
        case 3:
            cargo = "Caixa";
            percentual = 0.20;
            break;
        case 4:
            cargo = "Gerente";
            percentual = 0.10;
            break;
        case 5:
            cargo = "Diretor";
            percentual = 0; // Não há aumento para o cargo de Diretor
            break;
        default:
            cout << "Codigo de cargo invalido." << endl;
            return 1; // Encerra o programa com código de erro
    }

    // Cálculo do salário aumentado
    salarioAumentado = salario * (1 + percentual);

    // Exibição dos dados do funcionário
    cout << "\nDados do funcionario:" << endl;
    cout << "Nome: " << nome << endl;
    cout << "Salario: R$ " << fixed << setprecision(2) << salario << endl;
    cout << "Codigo do cargo: " << codigo << endl;
    cout << "Cargo: " << cargo << endl;
    cout << "Percentual de aumento: " << percentual * 100 << "%" << endl;
    cout << "Salario com aumento: R$ " << salarioAumentado << endl;

    return 0;
}