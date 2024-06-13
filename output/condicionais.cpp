#include <iostream>
using namespace std;

int main()
{
    cout << "********** Programa festa ********** \n";
    cout << "Seja bem-vindo :)\n\n";

    string ingresso;
    int idade;

    cout <<  "Voce tem ingresso? \n";
    cin >> ingresso; //sim

    cout << "Qual eh a sua idade? \n";
    cin >> idade; //20

    if ( idade>= 10 && ingresso == "sim") {
        cout << "Bem- Vindo a festa :) \n";
    }else{
        cout<< "nao pode entrar na festa \n";
    }
    return 0;
}
