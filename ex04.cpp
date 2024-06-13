#include <iostream>
using namespace std;

/*Faça um programa que receba o nome, o peso e a altura de uma
pessoa. Calcule e imprima o nome e o IMC dessa pessoa - IMC = peso
/ (altura * altura).*/
int main()
{
    string nome;
    float peso;
    float altura;

    //entrada
    cout << "Digite seu nome: \n"; 
    cin >> nome;

    cout << "Digite seu peso: \n";
    cin >> peso;

    cout << "Digite sua altura: \n";
    cin >> altura;

    //processamento
    float IMC = peso / (altura * altura);

    //sa'ida
    cout << "seu IMC eh " << IMC;

    return 0;
}
