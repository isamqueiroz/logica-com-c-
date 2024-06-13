#include <iostream>
using namespace std;

int main()
{
    string clima;
 
    cout << "esta chovendo hoje? (sim/nao)" << "\n";
    cin >> clima;

    cout << (clima == "sim" ? "leve um guarda-chuva." : "va de chinelo.") << endl;

    
    return 0;
}
