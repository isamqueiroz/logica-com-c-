#include <iostream>
using namespace std;
int main()
{
    
    float numero, soma = 0;
    int contador = 0;

    while(soma  <=100){
        cout << "informe um numero: ";
        cin >> numero;
        soma += numero;
        contador++;

    }if(contador > 0 ){
        cout << " a soma dos numeros eh: " << soma;
    }
    return 0;
}
