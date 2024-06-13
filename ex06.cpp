#include <iostream>
using namespace std;

int main()
{   //entrada
    float polegadas;

    cout << " informe sua medida em polegadas" << "\n";
    cin >> polegadas;

//processamento

float centimentros = polegadas / 2.54;

//saida
cout << "seus centimentros sao: " << centimentros << "\n";
    return 0;
}
