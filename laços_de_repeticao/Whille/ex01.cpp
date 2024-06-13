#include <iostream>

using namespace std;

int main()
{
    
    int num, cont;

    cout << "informe um numero: ";
    cin >> num;

    while (cont <=10){
        int resultado = num * cont;
        cout <<  num << " X " << cont << " = " <<  resultado << "\n";
        cont++;
       
    }
    return 0;
}
