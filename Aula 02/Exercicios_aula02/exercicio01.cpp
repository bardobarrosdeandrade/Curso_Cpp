#include <iostream>
#include <locale.h>  // necess�rio para setlocale()
using namespace std;
/*Exercicios 1 -   Cadastro de usu�rio
Descri��o: Crie um programa em C++ que solicite os seguintes dados: primeiro nome (string), idade (int), peso (float) e g�nero (char).
Exiba as informa��es formatadas ao final.
*/ 
int main () {
    setlocale(LC_ALL, "");  // Ativa locale do sistema (Windows) para suportar acentos
    string nome;
    int idade;
    float peso;
    string genero;
    cout << "-- Cadastro de usu�rio --" << endl;
    cout << "Qual seu nome? " << endl;
    getline(cin, nome); //ler a linha inteira, inclusive espa�os
    cout << "informe sua idade " <<endl;
    cin >> idade;
    cout << "informe seu peso " << endl;
    cin >> peso ;
    cout << "Qual sua identidade de genero? " <<endl;
    // getline(cin, genero); //ler a linha inteira, inclusive espa�os
    cin >> genero;

    cout << "o seu nome � " << nome <<  ", tem "  << idade << " anos," " e est� com " << peso << "kg" " e sua identidade de g�nero � " << genero << endl;

    cout << "-- Cadastro realizado com sucesso --" << endl;
    cout << "--- SEJA BEM VINDO ---" << endl;
    return 0;
}
