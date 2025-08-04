#include <iostream>
#include <locale.h>  // necessário para setlocale()
using namespace std;
/*Exercicios 1 -   Cadastro de usuário
Descrição: Crie um programa em C++ que solicite os seguintes dados: primeiro nome (string), idade (int), peso (float) e gênero (char).
Exiba as informações formatadas ao final.
*/ 
int main () {
    setlocale(LC_ALL, "");  // Ativa locale do sistema (Windows) para suportar acentos
    string nome;
    int idade;
    float peso;
    string genero;
    cout << "-- Cadastro de usuário --" << endl;
    cout << "Qual seu nome? " << endl;
    getline(cin, nome); //ler a linha inteira, inclusive espaços
    cout << "informe sua idade " <<endl;
    cin >> idade;
    cout << "informe seu peso " << endl;
    cin >> peso ;
    cout << "Qual sua identidade de genero? " <<endl;
    // getline(cin, genero); //ler a linha inteira, inclusive espaços
    cin >> genero;

    cout << "o seu nome é " << nome <<  ", tem "  << idade << " anos," " e está com " << peso << "kg" " e sua identidade de gênero é " << genero << endl;

    cout << "-- Cadastro realizado com sucesso --" << endl;
    cout << "--- SEJA BEM VINDO ---" << endl;
    return 0;
}
