/*Bryan E Isadora*/
#include <iostream>
#include <vector>
#include <string>
#include <limits>
using namespace std;    

vector<string> passageiros;
vector<string> origens;
vector<string> destinos;
vector<string> datas;

void desenhaBoasVindas (){
    cout << " -------------------------- " << endl;
    cout << "|                           |" << endl;
    cout << "|   Bem-Vindo ao Programa   |" << endl;
    cout << "|            de             |" << endl;
    cout << "|    Passagens Aereas :)    |" << endl;
    cout << "|                           |" << endl;
    cout << " -------------------------- " << endl << endl;
}

void DesenhaMenu(){
    cout << " -----------MENU----------- " << endl;
    cout << "|                           |" << endl;
    cout << "|   Escolha uma Opcao:      |" << endl;
    cout << "|    1) Cadastrar Passagem  |" << endl;
    cout << "|    2) Listar Passagens    |" << endl;
    cout << "|    0) Sair                |" << endl;
    cout << "|                           |" << endl;
    cout << " -----------MENU----------- " << endl;
    cout << "Opcao: ";
}

void limpaBufferDoCin(){
    cin.ignore(numeric_limits<streamsize> :: max(), '\n');
}

void cadastrarPassageiros(){
    limpaBufferDoCin();
    string nome;
    string origem;
    string destino;
    string data;

    cout << "Digite o Nome do Passageiro: ";
    getline(cin, nome);
    cout << "\n";

    cout << "Digite o Local de Partida: ";
    getline(cin, origem);
    cout << "\n";

    cout << "Digite o Destino: ";
    getline(cin, destino);
    cout << "\n";

    cout << "Digite a Data: ";
    getline(cin, data);
    cout << "\n";

    passageiros.push_back(nome);
    origens.push_back(origem);
    destinos.push_back(destino);
    datas.push_back(data);
}

void ListarPassagens(){
    cout << " -------------------------- " << endl;
    cout << "|                           |" << endl;
    cout << "|   Bem-Vindo ao Programa   |" << endl;
    cout << "|            de             |" << endl;
    cout << "|    Lista de passageiros   |" << endl;
    cout << "|                           |" << endl;
    cout << " -------------------------- " << endl << endl;

    cout << "Quantidade De passagens: " << passageiros.size() << endl << endl;
    
    for (int i = 0; i < 4; i++){
        cout << "Passageiro: " << passageiros[i] << endl;
        cout << "Origem: " << origens[i] << endl;
        cout << "Destino: " << destinos[i] << endl;
        cout << "Data de Embarque: " << datas[i] << endl << endl;
    }
}

void ListaDeCadastroPassageiros(){
    cout << " -------------------------- " << endl;
    cout << "|                           |" << endl;
    cout << "|   Bem-Vindo ao Programa   |" << endl;
    cout << "|            de             |" << endl;
    cout << "|  Cadastro de passageiros  |" << endl;
    cout << "|                           |" << endl;
    cout << " -------------------------- " << endl << endl;
}

int main(){ 
    system("cls");

    int opcao = -1;
    string continua = "";
    desenhaBoasVindas();

    do
    {
       DesenhaMenu();
       cin >> opcao;
       cout << endl;

       switch (opcao){
       case 1:
        cout << "Voce Escolheu A Opcao Cadastrar Passagem!" << endl << endl;
        ListaDeCadastroPassageiros();
        cadastrarPassageiros();
        break;

       case 2:
        cout << "Voce Escolheu A Opcao Listar Passagens!" << endl << endl;
        ListarPassagens();
        break;

       default:
        cout << "Opcao Invalida!" << endl << endl;
        break;
       }
    } while (opcao != 0);

    system("cls");
     
    cout << "Obrigado Por Utilizar O Programa :)" << endl << endl;
    
    return 0;
}