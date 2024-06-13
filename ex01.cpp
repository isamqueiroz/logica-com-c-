#include <iostream>
using namespace std;

int main () 
{
 /*Faça um programa que receba a idade de uma
  pessoa em anos e imprima essa idade em:
  Meses, Dias, Horas, Minutos.
  */

 //Entrada
int idade;


cout << " Qual eh sua idade? \n";
cin >> idade;


cout << idade << "\n"; 

 //Processamento
int idadeMeses = idade * 12;

 //Saida
 cout << "idade em meses: " << idadeMeses << "\n";
 

 int idadeDias = idade * 365;
 cout << "idade em dias : " << idadeDias << "\n";


int idadeHoras = idade * 8760;
cout << "idade em horas: " << idadeHoras << "\n";


int idadeMinutos = idade * 525600;
cout << "idade em Minutos: " << idadeMinutos << "\n";

  return 0;
}