#include <iostream>
using namespace std;

int main()
{
    system ("cls");
    int numero;

    cout << "digite um numero inteiro:";
    cin >> numero;
    cout << "\n";

    cout << "tabuada de " << numero << ": " << endl;

    int contador = 1;
    do{
    cout << numero << " x " << contador << " = " << numero * contador << endl;
    contador++ ;
    }while(contador <=10);

    return 0;
}
