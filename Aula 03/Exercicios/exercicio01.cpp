#include <iostream>
using namespace std;

/*
Descrição: Escreva um programa que leia dois valores inteiros e informe qual é o maior. Se os números forem iguais, imprima qualquer um deles.
*/

int main(){
   cout << "---- verifica qual numero maior ou igual ---- ";
    int num1 = 0, num2 = 0;

    cout <<"\nDigite um numero : ";
    cin >> num1;

    cout << "Digite mais um numero : ";
    cin >> num2;

    if (num1 > num2){
        cout << num1 << " eh maior que "<<num2<< endl;
    }else if(num1 == num2){
        cout << num1 << "eh igual a " << num2 << endl;
    }else cout << num2 << " eh maior que " << num1;

    return 0;
}