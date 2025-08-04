#include <iostream>
#include <locale.h> // usado p o setlocale
using namespace std;

/*
Exerc�cio 3 - C�lculo de IMC com Classifica��o
Descri��o: Solicite o nome, peso e altura do usu�rio.
Calcule o IMC e use o operador tern�rio para indicar se o usu�rio est� com peso normal (IMC entre 18.5 e 24.9) ou fora da faixa.

*/
int main (){
    setlocale(LC_ALL, "");  // Ativa locale do sistema (Windows) para suportar acentos
    string nome;
    float peso, altura;
    float resultado;

        cout << "---- Sistema de c�lculo de IMC ----" << endl;
        cout << "Informe seu nome : "<<  endl;
        getline(cin, nome); //para poder colocar o nome completo, pega tudo at� os espa�os
        cout << "informe seu peso : " << endl;
        cin >> peso;
        cout << "Informe sua altura : " << endl;
        cin >> altura;
        
        // calculo
        resultado = peso/(altura * altura);
        cout << "Ol�, " <<nome<< ". seu IMC � : " << resultado <<endl;

        // condicionais com operador ternario para definir se a pessoa est� acima do peso ou abaixo 
        cout << (resultado < 18.5 ? "Abaixo do peso" :
                resultado < 25   ? "Peso normal" :
                resultado < 30   ? "Sobrepeso" :
                resultado < 35   ? "Obesidade grau 1" :
                resultado < 40   ? "Obesidade grau 2" :
                "Obesidade grau 3");

    return 0;
}