#include <iostream>
using namespace std;

int main () 
{
/*Faça um programa que receba o ano de nascimento de uma pessoa
e o ano atual. Calcule e imprma:
A. a idade dessa pessoa
B. essa idade convertida em semanas*/

// entrada
int anoNascimento;
 int anoAtual;

// processamento 
cout << "Qual ano voce nasceu?" << "\n";
cin >> anoNascimento;
cout << "Qual o ano atual?" << "\n";
cin >> anoAtual;
int idade = anoAtual - anoNascimento;
cout << " A idade da pessoa em semanas é : " << idade << "anos." << endl;


//saida
int idadeSemanas = idade * 52;

cout << "A idade da pessoa em semanas e: " << idadeSemanas << "semanas." << endl;
}