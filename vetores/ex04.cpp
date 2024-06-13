#include <iostream>

using namespace std;

int main()
{
    
    int numeros[5];

    for(int i = 0; i < 5; i++){

        cout << "digite um numero: ";
        cin >> numeros[i];
    }

cout << "numeros digitados: ";

    for (int num = 0; num < 5; num++){

         cout << numeros[num] << "  ";
           
    }
    return 0;
}