#include <iostream>
using namespace std;


int main(){
    int idade;
    string resultado;

    cout <<"digite a sua idade";
    cin >> idade;

    // Uso do operador tern�rio: Se a condi��o for verdadeira, retorna o valor antes dos dois-pontos; sen�o, o valor depois.
    
    cout << (idade >= 18? "Maior idade" : "Menor idade" ) << endl;

    return 0;
}