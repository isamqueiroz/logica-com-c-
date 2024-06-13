#include <iostream>
using namespace std;

int main()
{
    int quantidade;
    cout << "qual a quantidade de numeros desejados a digitar?";
    cin >> quantidade;
     // num = 5;
     int num = 0;
     while (num <= quantidade){
        int numero;
        cout << " digite um numero ";
        cin >> numero;
        if(numero % 2 == 0) {
            cout << "seu numero eh par: " << numero << endl;
        }
        num++;
     }
    return 0;
}
