#include <iostream>
using namespace std;

// exercicio 1
// descrição : escreva um programa que solicite um numero inteiro e imprima os 10 primeiros multiplos desse numero.

/*
Variavel de controle
condição
alteração na variavel controle (incremento ou decremento)
bloco de codigo
*/

  int main(){
    cout << "informe a quantidade de idade que você quer veificar" << endl;
    
    for (int contador = 0; contador < 5; contador++){
    int idade = 0 ;
    cout << "qual sua  idade?" << contador +1 << endl;
    cin >> idade;

    if (idade >= 18){
        cout << "maior de idade";
    }else {
        cout << "menor de idade";
    }
    return 0;
  }
}
