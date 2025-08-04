#include <iostream>
#include <string>
using namespace std;

int main() {
    string nome;
    int idade;
    float altura;

    cout << "digite seu nome :";
    getline(cin, nome); //ler a linha inteira, inclusive espaços

    cout << "digite sua idade :";
    cin >> idade; //ler um numero inteiro

    cout << "digite sua altura :";
    cin >> altura; // ler um numero real

    cout << "\n --DADOS INSERIDOS-- " << endl;
    cout << "Nome : "   <<nome<< endl;
    cout << "Idade : "  <<idade<< endl;
    cout << "Altura : " <<altura<< endl;

    return 0;
}