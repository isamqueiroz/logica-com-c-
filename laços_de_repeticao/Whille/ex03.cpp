#include <iostream>
using namespace std;
int main()
{
    float numero;
    int soma=0, contador=0;
    cout << "informe um numero ( caso deseje encerrar digite um numero negativo): ";
    cin >> numero;

    while (numero > 0){
        soma += numero;
        contador++;
        cin >> numero;

    }
    float media = soma / contador;
    cout << " a media dos numeros eh: " << media;
    return 0;
}
