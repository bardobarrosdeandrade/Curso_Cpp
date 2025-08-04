#include <iostream>
using namespace std;


int main(){
    int idade;
    string resultado;

    cout <<"digite a sua idade";
    cin >> idade;

    // Uso do operador ternário: Se a condição for verdadeira, retorna o valor antes dos dois-pontos; senão, o valor depois.
    
    cout << (idade >= 18? "Maior idade" : "Menor idade" ) << endl;

    return 0;
}