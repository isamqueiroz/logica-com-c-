#include <iostream>
using namespace std;


// Funções

// tipoDeDado nomeDaFunção(parametro1, prarametro2) {
//     bloco de código
//     lógica da função

    //retorno da função
// }
// atalho - ALT + SHIFT
void idade(){
    
// entrada
    int anoAtual = 2024;
    int anoNascimento;

    cout << "Qual ano você nasceu? \n";
    cin >> anoNascimento;

    // processamento
    int idade = anoAtual - anoNascimento;
    int idadeSemana = idade * 4 * 12;

    // saída
    cout << "Você têm " << idade << " anos \n";
    cout << "Sua idade em semanas é " << idadeSemana << " semanas" << endl;

} //fim da função idade




int main()
{
  system ("cls");
  cout << "__________________________ \n";
  cout << "|                         |\n";
  cout << "|  bem vindo ao programa  |\n";
  cout << "|          dos            |\n";
  cout << "|      exercicios!        |\n";
  cout << "|_________________________|\n";
  
  int opcoes;

  cout << "1) idade\n";
  cout << "2) centimentros\n";
  cout << "3) polegadas\n";
  cout << "4) IMC\n\n";
  cout << " escolha uma das opcoes: \n";
  cin >> opcoes;

switch (opcoes)
{
case 1:
cout << " voce escolheu idade! ";
    break;
 case 2 : 
 cout << " voce escolheu centimentros! ";
    break;
case 3 : 
cout << "voce escolheu polegadas!";
    break;
case 4 :
cout << "voce escolheu IMC!";
    break;

default:
cout << " opcao invalida!";

}
    return 0;
}
