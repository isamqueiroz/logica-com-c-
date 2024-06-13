#include <iostream>

using namespace std;

//escreva um programa que use 
//um laço for para imprimir os numeros 
// de N a 1 , onde N eh fornecido pelo usario

int main() {
    int N;

    // Solicita ao usuário fornecer o valor de N
    std::cout << "Digite um número inteiro positivo: ";
    std::cin >> N;

    // Verifica se N é positivo
    if (N <= 0) {
        std::cout << "Por favor, forneça um número inteiro positivo." << std::endl;
        return 1; // Retorna 1 para indicar um erro
    }

    // Usa um loop for para imprimir os números de N a 1
    std::cout << "Números de " << N << " a 1:" << std::endl;
    for (int i = N; i >= 1; i--) {
        std::cout << i << std::endl;
    }

    return 0; // Retorna 0 para indicar sucesso
}
