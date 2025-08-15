#include <iostream>
using namespace std;


//exemplo de uma função que não tem retorno, ela apenas imprime oque está na outra função principal.
// o resultado é 10 porque ela está apenas imprimindo, ela tem parametro mas não tem retorno.

void dobrar(int numero){
    numero *2;
}

int main(){
    int numero = 10;
    
    dobrar(numero);
    
    cout << numero;
    
    return 0;
}