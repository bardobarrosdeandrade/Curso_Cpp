#include <iostream>
using namespace std;
/*

🔹 Exercício 2 - Categorias de Nadadores
Descrição: Escreva um programa que, dada a idade de um nadador, classifique-o em uma das seguintes categorias:
Infantil A: [5;7]
Infantil B: [8;10]
Juvenil A: [11;13]
Juvenil B: [14;17]
Adulto: [18;40]
Master: A partir de 41 e sem limite superior
Caso a idade informada esteja fora dos limites, emita uma mensagem de erro: "Idade invalida."
*/

int main(){
    int idade = 0;
    
    cout << " Categorias de Nadadores ";
    cout << "\nInforme sua idade : ";
    cin >> idade;

    if (idade >= 5 && idade <= 7){
        cout <<"O nadador se enquadra na categoria : infantil A ";
    }else if (idade >= 8 && idade <= 10){
        cout <<"O nadador se enquadra na categoria : infantil B ";
    }else if (idade >= 11 && idade <= 13){
        cout <<"O nadador se enquadra na categoria : juvenil A ";
    }else if (idade >= 14 && idade <= 17){
        cout <<"O nadador se enquadra na categoria : juvenil B ";
    }else if (idade >= 18 && idade <= 40){
        cout <<"O nadador se enquadra na categoria : adulto ";
    }else if (idade >= 41){
        cout <<"O nadador se enquadra na categoria : Master ";
    }else cout << "Idade invalida";

    return 0;

}
