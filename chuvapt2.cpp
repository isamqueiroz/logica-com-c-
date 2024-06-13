#include <iostream>
using namespace std;




int main()
{
     // criacao de variaveis
     string clima;

     cout << "esta chovendo? \n"; //imprimir escrever na tela
     cin>> clima;

     if(clima== "sim") {//se verdadeiro
        cout << "pegar o guarda-chuva \n";
     }else {// se falso
        cout<< "nao precisa de guarda chuva \n";
        cout << "va de chinelo \n";
     }
    return 0;
}
