#include <iostream>
using namespace std;

int main()
{
     system ("cls");
    string senhaInformada;
    string senhaConfirmacao;



    do
    {
     cout << "infome sua senha: " << endl;
     cin >> senhaInformada;

     cout << "informe sua senha :\n";
     cin >> senhaInformada;

    cout << "confirme sua senha: \n";
    cin >> senhaConfirmacao;


     if (senhaInformada == senhaConfirmacao)
     {
        cout << "acesso liberado :)";
     }else{
        cout << "senha incompativel, tente novamente" << endl;
     }
     

    } while (senhaInformada != senhaConfirmacao);
    
    return 0;
}