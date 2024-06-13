#include <iostream>
using namespace std;

//Uma empresa decide dar aumento de 30% aos funcionários cujo salário é inferior a
//500 reais. Escreva um programa que receba o salário de um funcionário e imprima o
//valor do salário reajustado ou uma mensagem caso o funcionário não tenha direito a
//aumento.

int main()
{
    string nome, cargo;
    float salario;

    
    cout << "qual o cargo do funcionario  " << nome << " ? \n";
    cin >> cargo;
    
    cout << "Qual o salario do funcionario " << nome << "? \n";
    cin >> salario;

        if (salario < 3500) {

            cout << " voce recebera um salario minimo a mais de :" << salario + (salario * 10/ 100) << "\n";
        } else {
            cout << "o funcionario nao tem direito a aumento." << endl;
        }
    return 0;
}
