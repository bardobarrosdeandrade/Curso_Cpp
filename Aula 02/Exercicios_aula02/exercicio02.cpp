#include <iostream>
#include <locale.h> //necess�rio para setlocale()
using namespace std;
/*
Exerc�cio 2 - C�lculo de M�dia Final
Descri��o: Solicite o nome de um aluno e tr�s notas reais. Calcule e mostre a m�dia aritm�tica e uma mensagem com o nome do aluno.
*/
int main(){
    setlocale(LC_ALL, "");  // Ativa locale do sistema (Windows) para suportar acentos

    string nome;
    float nota1,nota2,nota3;

    cout << "Sistema de m�dia da nota final" << endl;
    cout << "informe seu nome :" << endl;
    getline(cin, nome); //ler a linha inteira, inclusive espa�os
    cout << "informe sua primeira nota :"  << endl;
    cin >> nota1;
    cout << "informe sua segunda nota :"   << endl;
    cin >> nota2;
    cout << "informe sua terceira nota :"  << endl;
    cin >> nota3;

    cout << "Ol�, " <<nome << ". Sua m�dia final � "<< (nota1+nota2+nota3)/3 << ", parab�ns!!" << endl;
    return 0;

    
}