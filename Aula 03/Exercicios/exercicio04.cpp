#include <iostream>
using namespace std;

/*
🔹 Exercício 3 - Canal de TV
Descrição: Escreva um programa que leia o número de um canal de televisão e escreva o nome da emissora correspondente. Caso o usuário forneça um canal sem emissora exibir a mensagem “Canal inválido”.Considere as seguintes emissoras e seus respectivos canais:

TV Ponta Verde: 5
TV Gazeta: 7
TV Pajuçara: 11
TV Farol: 16
*/

int main(){
    int opcao = 0;

    cout << "Digite o numero de um canal de TV \nopcoes :\nTV Ponta Verde: 5,\nTV Gazeta: 7,\nTV Pajuçara: 11 ,\nTV Farol: 16 \n";
    cin >> opcao ;

    switch (opcao)
    {
    case 5:
        cout <<"Tv Ponta Verde ";
        break;
    case 7: 
        cout <<"TV tvGazeta ";
        break;
    case 11:
        cout << "TV Pajucara ";
        break;
    case 16: 
        cout << "TV Farol ";
    default:
        cout <<"opcao invalida ";
    }

    return 0;

}