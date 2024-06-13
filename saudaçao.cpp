#include <iostream>
using namespace std;



int main (){
    //setlocale (LC_ALL, "Portuguese");
    string nomeUsuario;
    string sobrenomeDoUsuario;
    cout << "Seja Bem-Vindo ao programa saudacao\n\n";

    // cout << "Qual eh o seu nome?\n";
    cin >> nomeUsuario;

    cout << "Qual eh o seu Sobrenome?\n";
    cin >> sobrenomeDoUsuario;

    cout << "Ola " << nomeUsuario << "\n ";
    cout << sobrenomeDoUsuario << "\n";
}