#include <iostream>
#include <locale.h>
using namespace std;

int main(){
    setlocale(LC_ALL, "");  // Ativa locale do sistema (Windows) para suportar acentos
    int idade;
    char nacionalidade;

    cout << "digite sua idade ";
    cin >> idade;

    cout << "Você é brasileiro? (S/N) :";
    cin >> nacionalidade;

     // Operador E (&&): ambas as condições precisam ser verdadeiras

     bool podeVotar = (idade >= 16 && (nacionalidade == 'S' || nacionalidade =='s'));

     cout << (podeVotar == 0? "não pode votar" : "Deve votar!! ") << endl;
    
    return 0;
}