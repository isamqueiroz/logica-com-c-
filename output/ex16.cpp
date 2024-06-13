#include <iostream>
#include  <iomanip>
using namespace std;

int main() {
    // Declaracao das variaveis para armazenar o cargo e o salario do funcionario
    string cargo;
    float salario, salarioReajustado;

    // Solicitacao do cargo e do salário ao usuario
    cout << "Digite o cargo do funcionario: ";
    cin >> cargo;
    cout << "Digite o salario do funcionario: ";
    cin >> salario;

    // Verificacao do cargo e calculo do aumento de acordo com a tabela
    if (cargo == "Producao") {
        salarioReajustado = salario * 1.065; // 6.5% de aumento
    } else if (cargo == "Administrativo") {
        salarioReajustado = salario * 1.075; // 7.5% de aumento
    } else if (cargo == "Diretoria") {
        salarioReajustado = salario * 1.12; // 12% de aumento
    } else {
        cout << "Cargo invalido." << endl;
        return 1; // Encerra o programa com código de erro
    }

    // Exibição do salário reajustado
    // cout << fixed << setprecision(2); // Configura a exibição do valor com duas casas decimais
    cout << "O salario reajustado do funcionario eh: R$ " << fixed << setprecision(4) << salarioReajustado << endl;

    return 0;
}