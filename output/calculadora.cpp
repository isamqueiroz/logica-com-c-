#include <iostream>
using namespace std;

//funcoes
float somar (float n1, float n2)
 {
float r = n1 + n2;
return r;

}
float subtrair (float n1, float n2);
{
return n1-n2;
}

int main()
{
    float n1, n2, resultado; 
    string op;

cout << " bem vindo ao programa calculadora :) \n\n";

cout << " informe o primeiro numero: \n";
cin >> n1;

cout << "informe o segundo numero:\n";
cin >> n2;

cout << "informe a operacao soma, subtracao, multiplicacao ou divisao \n";
cin >> op;

if (op == "soma")
{
    resultado = somar (n1,n2);
    cout << "O resultado da soma eh: " << resultado << "\n";
} else if (op == "subtracao" ) {
    resultado =  subtrair (n1,n2);
    cout << " O resultado da subtracao eh: " << resultado << "\n";
}


    return 0;
} // fim do main
