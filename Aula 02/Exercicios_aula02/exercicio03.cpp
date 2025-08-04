#include <iostream>
#include <locale.h> // usado p o setlocale
using namespace std;

/*
Exercício 3 - Cálculo de IMC com Classificação
Descrição: Solicite o nome, peso e altura do usuário.
Calcule o IMC e use o operador ternário para indicar se o usuário está com peso normal (IMC entre 18.5 e 24.9) ou fora da faixa.

*/
int main (){
    setlocale(LC_ALL, "");  // Ativa locale do sistema (Windows) para suportar acentos
    string nome;
    float peso, altura;
    float resultado;

        cout << "---- Sistema de cálculo de IMC ----" << endl;
        cout << "Informe seu nome : "<<  endl;
        getline(cin, nome); //para poder colocar o nome completo, pega tudo até os espaços
        cout << "informe seu peso : " << endl;
        cin >> peso;
        cout << "Informe sua altura : " << endl;
        cin >> altura;
        
        // calculo
        resultado = peso/(altura * altura);
        cout << "Olá, " <<nome<< ". seu IMC é : " << resultado <<endl;

        // condicionais com operador ternario para definir se a pessoa está acima do peso ou abaixo 
        cout << (resultado < 18.5 ? "Abaixo do peso" :
                resultado < 25   ? "Peso normal" :
                resultado < 30   ? "Sobrepeso" :
                resultado < 35   ? "Obesidade grau 1" :
                resultado < 40   ? "Obesidade grau 2" :
                "Obesidade grau 3");

    return 0;
}