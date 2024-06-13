#include <iostream>
using namespace std;

int main()
{
    system ("cls");
    int num;


do
{
    cout << "informe um numero: \n";
    cin >> num;
    if (num >0)
    {
         cout << " o numero eh positivo.\n";
    }else if (num <0){
        cout << " o numero eh negativo.\n:";

    }else{
        cout << " o numero eh zero.\n";
    }
    
    
} while (num != 0);



    return 0;
}