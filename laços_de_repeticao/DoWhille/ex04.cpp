#include <iostream>
using namespace std;

int main()
{
     int num;
     int contador = 0;
     int soma = 0;
     
     do
     {
        cout << "informe um numero: \n";
        cin >> num;

        if (num > 0)
        {
            soma += num;
            contador++;
        }
        
     } while (num > 0);
     
     if (contador > 0)
     {
        int media = soma/contador;
        cout << " a media eh de " << media;
     }
     

    return 0;
}