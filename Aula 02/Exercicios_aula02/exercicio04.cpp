#include <iostream>
using namespace std;

/*
Exercício 4 - Par ou Impar
Descrição: Crie um programa em C++ que solicite um número inteiro ao usuário e utilize o operador ternário para exibir se o número é par ou ímpar.
*/

int main(){
    
    int numero;

    cout << "digite um numero ";
    cin >> numero;
    cout << (numero % 2 == 0 ?  "par" : "impar") << endl; 
    
}