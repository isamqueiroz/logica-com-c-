#include <iostream>
using namespace std;

int main() {
    // Declaração das variáveis
    float precoCompra, percentual, precoVenda;

    // Solicitação do preço de compra e do percentual de lucro
    cout << "Digite o preco de compra do produto: ";
    cin >> precoCompra;
    cout << "Digite o percentual a ser aplicado para venda (%): ";
    cin >> percentual;

    // Cálculo do preço de venda
    precoVenda = precoCompra * (1 + percentual/100);

    // Exibição do preço de venda
    cout << "O preco de venda do produto eh: R$ " << precoVenda << endl;

    // Verificação do percentual aplicado
    if (percentual < 50) {
        cout << "Atenção: o produto será vendido com uma margem muito pequena de lucro." << endl;
    }

    return 0;
}