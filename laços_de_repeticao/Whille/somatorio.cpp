#include <iostream>
using namespace std;
int main()
{
    int somatoria = 0, numero = 0;
    while ( somatoria <=10){
        cout << "digite um numero: \n";
        cin >> numero;

        somatoria = somatoria + numero;

        if (numero % 2 == 0 )
        {//par
            somatoria = somatoria + numero + 2;
    
        }else{//impar
            somatoria = somatoria + numero * 2;
        }

        cout << "numero digitado: " << numero << endl;
      cout << "somatoria: " << somatoria << endl;
        
        
    }
    cout << "total: " << somatoria;
    return 0;
}
