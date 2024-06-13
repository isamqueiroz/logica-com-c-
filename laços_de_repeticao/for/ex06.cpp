#include <iostream>

using namespace std;

int main()
{
    for (int tabuada =1; tabuada <=10; tabuada++){
        cout << "tabuada do " << tabuada << "\n";

        for (int num =1; num <=10; num++){
            int resultado = tabuada * num;
            cout << tabuada << " x " << num << " = " << resultado << "\n";
      }
cout << "-----------------\n";

}


    
    return 0;
}
