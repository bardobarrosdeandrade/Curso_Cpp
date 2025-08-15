#include <iostream>
using namespace std;
//criar um programa que vai pedir 2 operações aritmeticas e mostrar o resultado 
// a função void é bom para utilizar quando não é mostrado algum dado, como essa função "mostrarSoma" ela retorna algum dado, então
// é utilizado o int de inteiro porque vai retornar resultado.

int somar(int n1, int n2){
    int resultado = n1 + n2;
    return resultado;
}

void mostrarClassificacao(int resultado){
    if(resultado == 0){
        cout << "o resultado é zero";
    }else if (resultado >0){
        cout << "Resultado positivo";
    }else{
        cout << "Resultado é negavito";
    }    
}

int main(){
    int n1, n2, resultado;
    
    cout << "informe um numero :";
    cin >> n1;
    
    cout << "informe outro numero :";
    cin >> n2;
    
    resultado = somar(n1, n2);
    
    cout << "O resultado é : " << resultado << endl;
    
    mostrarClassificacao(resultado);

    
    return 0;
}
