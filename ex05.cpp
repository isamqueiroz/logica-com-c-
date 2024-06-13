#include <iostream>
using namespace std;

int main()
{// entrada
    float centimentros;

    cout << "informe sua medida em centimentros" << "\n";
    cin >> centimentros;

    //processamento

    float polegadas = centimentros * 2.54;

    //saida
    cout << "suas polegadas: " << polegadas << "\n";

    return 0;
}
