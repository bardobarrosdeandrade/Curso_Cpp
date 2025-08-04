#include <iostream>
#include <locale.h> //necessário para setlocale()
using namespace std;
/*
Exercício 2 - Cálculo de Média Final
Descrição: Solicite o nome de um aluno e três notas reais. Calcule e mostre a média aritmética e uma mensagem com o nome do aluno.
*/
int main(){
    setlocale(LC_ALL, "");  // Ativa locale do sistema (Windows) para suportar acentos

    string nome;
    float nota1,nota2,nota3;

    cout << "Sistema de média da nota final" << endl;
    cout << "informe seu nome :" << endl;
    getline(cin, nome); //ler a linha inteira, inclusive espaços
    cout << "informe sua primeira nota :"  << endl;
    cin >> nota1;
    cout << "informe sua segunda nota :"   << endl;
    cin >> nota2;
    cout << "informe sua terceira nota :"  << endl;
    cin >> nota3;

    cout << "Olá, " <<nome << ". Sua média final é "<< (nota1+nota2+nota3)/3 << ", parabéns!!" << endl;
    return 0;

    
}