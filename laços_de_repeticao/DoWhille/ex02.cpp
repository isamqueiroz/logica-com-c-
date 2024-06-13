#include <iostream>
using namespace std;

int main()
{
     system ("cls");
    string senhaInformada;
    const string senhaSalva = "info@134";

    do
    {
     cout << "infome sua senha: " << endl;
     cin >> senhaInformada;


     if (senhaInformada == senhaSalva)
     {
        cout << "acesso liberado :)";
     }else{
        cout << "senha incompativel, tente novamente" << endl;
     }
     

    } while (senhaInformada != senhaSalva);
    
    return 0;
}