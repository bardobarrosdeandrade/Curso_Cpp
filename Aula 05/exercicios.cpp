#include <iostream>
using namespace std;
// Sem parametro e sem retorno

void mostrarMensagem(){
    cout << "Programação em C++\n";
    return;
}

// sem parametro e com retorno

int obterNumero(){
    return 32;
}

//com parametro e sem retorno

void mensagemDeBoasVindas(string nome){
    cout << "Olá, " << nome << "Seja bem vindo! \n";
}

//com parametro e com retorno
int subtrair(int n1, int n2){
    return n1 - n2;
}

int main(){
    
    string nome = "bardo\n";
    mostrarMensagem();
    
    cout << obterNumero();
    
    mensagemDeBoasVindas(nome);
    
    subtrair(20, 10);
    cout << subtrair;
    return 0;
}