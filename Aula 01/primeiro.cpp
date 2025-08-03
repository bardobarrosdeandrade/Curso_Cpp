#include <iostream>
#include <locale.h>  // necessário para setlocale()
using namespace std;
/*
para criar o arquivo executavel do codigo (compilar), p executar corretamente :
no terminal do codigo, serve para compilar : .\nomeDoArquivo.cpp -o nomeDoarquivo
e no terminal mesmo é só executar chamando o proprio nome com ./nomeDoarquivo.exe que ele vai ser executado
*/ 
/*
no c++ para atualizar o codigo de fato, tem que fazer (CTRL + SHIFT B) aí sim ele vai executar corretamente
*/
/*int main() {
    std::cout <<"Hello, world!\n";
    std::cout <<"Curso de c++" << std::endl;
    std::cout <<"Oxetech Lab";
}
*/
 // cout imprime os dados / saida de dados
 // cin ler os dados / entrada de dados
int main() {
    setlocale(LC_ALL, "");  // Ativa locale do sistema (Windows) para suportar acentos
    int x;
    cout << "digite sua idade";
    cin >> x;
    cout << "sua idade é : " << x << endl;
    return 0;
}
