#include <iostream>

using namespace std;

int main()
{
    system ("cls");

    int numeros[3];
    
    cout << "digite um numero: ";
    cin >> numeros[0];

    cout << "digite outro numero: ";
    cin >> numeros[1];

    cout << "digite outro numero: ";
    cin >> numeros[2];

    for(int xpto = 0; xpto < 3; xpto++){
        cout << numeros [xpto] << endl;
    }
    return 0;
}
