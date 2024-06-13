#include <iostream>

using namespace std;

int main()
{
      system ("cls");

    int numeros[3];

    for(int xpto = 0; xpto < 3; xpto++){

      cout << "digite um numero: "; 
      cin >> numeros[xpto];
    
    }
    cout << endl << endl;
    
    for(int num = 0; num < 3; num++){
       
        cout << numeros [num] << endl;

    }
    return 0;
}
