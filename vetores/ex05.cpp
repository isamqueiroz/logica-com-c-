#include <iostream>

using namespace std;

int main()
{
    system("cls");

    int numero[5];
    int contador = 0;
    int numeroDigitado;
    // cout << "digite um numero par: ";
    // cin >> numero[10]; 

    while (contador < 5)
    {
        cout << "digite um numero: ";
        cin >> numero[contador]; 


        if (numero[contador]% 2 == 0)
        {
           numero[contador] = numeroDigitado;
            cout << " o seu numero eh par. \n";
        contador++;

        }else{
            cout << "o seu numero nao eh par. \n ";
        }
        


    for (int i = 0;  i < 5; i++)   
 {

cout << "os numeros sao: " << numero[i] << endl;
     
    }
    

    }
    
    return 0;
}
