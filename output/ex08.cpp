#include <iostream>
using namespace std;

//Faça um programa que receba o nome, cargo e salário de um funcionário. Se o
//funcionário ganhar abaixo de 1000 reais, calcule o salário acrescido de 10%. Ao final
//exiba o nome, o cargo e o salário desse funcionário.//


int main()
{
    string nome, cargo;
    float salario;

    //entrada
    cout << "digite o nome do funcionario \n";
    cin >> nome;
    cout << "qual eh o cargo do " << nome << "? \n";
    cin >> cargo;
    cout << "Qual eh o salario do " << nome << "? \n";
    cin >> salario;
    if (salario < 1000) {
        salario = salario + (salario * 10 / 100 ); //10%
    }
     cout << "seu novo salario eh: R$ " << salario << "\n";
    return 0;
} //fim da funcao main
