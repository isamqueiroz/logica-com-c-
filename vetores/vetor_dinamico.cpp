#include <iostream>
#include <vector>
using namespace std;

int main()
{
    system("cls");

    vector<string> nomes;
    cout << " tamanho do array: " << nomes.size() << endl;

    nomes.push_back("eduardo");
    cout << " tamanho do array: " << nomes.size() << endl;
    cout << " nome: " << nomes [0] << endl;

    nomes.push_back("samantha");
    cout << " tamanho do array: " << nomes.size() << endl;
    cout << " nome: " << nomes [1] << endl;


    nomes.push_back("isadora");
    cout << " tamanho do array: " << nomes.size() << endl;
    cout << " nome: " << nomes [2] << endl;


    nomes.push_back("davi");
    cout << " tamanho do array: " << nomes.size() << endl;
    cout << " nome: " << nomes [3] << endl;
    
    nomes.push_back("carlos");
    cout << " tamanho do array: " << nomes.size() << endl;
    cout << " nome: " << nomes [4] << endl;


    return 0;
}
