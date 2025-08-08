#include <iostream>
using namespace std;

int main() {
    string dia, opcao, nome;
    double preco;
    double preco_final;

    cout << "informe o dia da compra";
    cin >> dia;
    cout << "informe o preco da compra";
    cin >> preco;
    cout << "informe a opcao ouro ou prata";
    cin >> opcao;
    getline(cin, nome); // Lê o nome do produto (pode ter espaços)


    // Regras
    if ((dia == "segunda" || dia == "terca" || dia == "quarta") && opcao == "ouro") {
        preco_final = preco / 2.0;
    }
    else if ((dia == "quinta" || dia == "sexta") && preco >= 10.0 && preco <= 100.0) {
        preco_final = preco / 3.0;
    }
    else if (dia == "sabado" && opcao == "prata") {
        preco_final = preco * 3.0;
    }
    else {
        preco_final = preco * 2.0;
    }

    cout << "O preco do produto " << nome << " no dia " << dia << " eh " << preco_final << endl;

    return 0;
}
