#include <iostream>

using namespace std;

int main()
{
    
    int numeros[5];

    for(int i = 0; i < 5; i++){

        cout << "digite um numero: ";
        cin >> numeros[i];
    }

    for (int num = 0; num < 5; num++){

         cout << (num+1)<< "o) numero" << ": " << numeros[num] << endl;
           
    }
    return 0;
}