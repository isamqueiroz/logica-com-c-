#include <iostream>
using namespace std;

int main()
{
    
    int contador = 10;
  

    do
    {
        if (contador == 10)
        {
          cout << " preparar... \n";
        
    }else if ( contador == 5){
          cout << " pronto? \n";
    }else{
        cout << contador << "... \n";
        
    }
    
    contador--;
      
    } while (contador > 0);
     cout << " fogo!" << endl;
     

    return 0;
}
