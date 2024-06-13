#include <iostream>
using namespace std;

    int main(){
//escreva um programa que imprima o seguinte padrao de asteriscos, como:
//*
//**
//*
//**
//***

    for (int i = 1; i <= 5; ++i) {
        for (int j = 0; j < i; ++j) {
        cout << "*";
        }

        cout << endl;
    }
    return 0;
}
