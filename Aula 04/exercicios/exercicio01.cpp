#include <iostream>
using namespace std;
// descrição : escreva um programa que solicite um numero inteiro e imprima os 10 primeiros multiplos desse numero.

 int main(){
    int num;
    cout << "insira um numero";
    cin >> num;
    
    for (int mult = 1; mult <= 10; mult++){
    cout << "sequencia : " << num * mult << endl;
    }
    
    return 0;
}

