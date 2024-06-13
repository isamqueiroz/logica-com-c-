#include <iostream>
using namespace std;

int main()
{
    // entrada
    string nome;
    string cargo;
    int salario;

    cout << "informe seu nome" << "\n";
    cin >> nome;

    cout << "informe seu cargo" << "\n";  
    cin >> cargo;

    cout << "informe seu salario" << "\n";
    cin >> salario;

    //processamento

    int SalarioAcrescido = salario * 0.10;
    int NovoSalario = SalarioAcrescido + salario;

    // saida
    cout << "nome:" << nome << "\n";
    cout << "cargo:" << cargo << "\n";
    cout << "NovoSalario:"  << NovoSalario << "\n";

    return 0;
}
