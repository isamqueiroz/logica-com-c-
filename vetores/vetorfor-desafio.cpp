#include <iostream>

using namespace std;

int main()
{
     string nomes [5] = {"eduardo", "samantha", "jucelino" , "Wesley", "wanderlley" };
    int idades [5] = {41, 21, 44, 90, 16};
    

    // int contador = {nomes[5], idades[5] };

    for(int contador = 0; contador <=4; contador++ ){
         cout << "nome: " << nomes [contador] << endl;
    cout << "idade: " << idades [contador] << " anos" << endl;

    }
    return 0;
}
