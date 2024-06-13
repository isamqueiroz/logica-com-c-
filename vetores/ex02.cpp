#include <iostream>

using namespace std;

int main()
{
    
    int numeros[5];

    for(int i = 0; i < 5; i++){

        cout << "digite um numero: ";
        cin >> numeros[i];
    }

    for (int i = 0; i < 5; i++){

         cout << "Numero" << (i + 1) << " " << numeros[i] << endl;
           
    }
    return 0;
}