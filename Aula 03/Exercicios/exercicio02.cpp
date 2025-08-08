#include <iostream>
using namespace std;

/*
🔹 Exercício 1 - Verificação de Habilitação
Descrição: Faça um programa que leia o ano de nascimento do usuário e o ano atual, calcule a idade e informe:

Quantos anos o usuário terá no ano atual
Se ele já pode tirar a habilitação (idade mínima: 18 anos)
*/

int main(){
    cout << "----- Sistema de verificacao de habilitacao ------ " ;
    int idade = 0, anoNascimento = 0, anoAtual = 0 ;

    cout << "\ninforme o ano que voce nasceu : ";
    cin >> anoNascimento ;
    cout << "qual a data do ano atual? : ";
    cin >> anoAtual ;

    idade = anoAtual - anoNascimento;

    if (idade >= 18){
        cout <<"\nEm " << anoAtual << " Voce vai ter " << idade << " e vai poder tirar a habilitacao";
    }else cout <<"\nEm " << anoAtual << " Voce vai ter " << idade << " e ainda nao vai poder tirar a habilitacao";

    return 0;  

}