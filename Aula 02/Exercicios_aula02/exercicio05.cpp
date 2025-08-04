#include <iostream>
#include <locale.h>
#include <string>
using namespace std;

/*
Exercùcio 5 - Venda com Desconto e Juros
Descriùùo: Solicite o valor de um produto e calcule:

preùo com 5% de desconto (pagamento ù vista),
valor das 5 parcelas com 10% de acrùscimo (pagamento parcelado),
comissùo do vendedor para cada caso (6% sobre o valor de venda final).
*/

int main(){
    setlocale(LC_ALL, "");  // Ativa locale do sistema (Windows) para suportar acentos

    cout<< "loja BardosBardos, peÁa j·!! : mesa(199.99), monitor(1500), geladeira(3500), tv(1900)" << endl;
    
    float mesa = 199.99;
    float monitor = 1500.0;
    float geladeira = 3500.0;
    float tv = 1900.0;
    float preco_produto = 0.0;
    bool pagamento = false;
    string nome_produto;

    cout << "informe o produto a partir do nome : " << endl;
    cin >> nome_produto;

    if (nome_produto == "mesa") preco_produto = mesa;
    else if (nome_produto == "monitor") preco_produto = monitor;
    else if (nome_produto == "geladeira") preco_produto = geladeira;
    else if (nome_produto == "tv") preco_produto = tv;
    else {
        cout<<"produto n„o encontrado"<< endl;
        return 0; // caso n„o encontre o produto, È pra parar o sistema.
    }
    
    cout << "pagamento a vista? (1 para sim, 0 para n„o): ";
    cin >> pagamento;

    if (pagamento){
        float preco_a_vista = preco_produto *0.95; //5% de desconto aplicado no produto a vista
        float comissao = preco_a_vista * 0.06; //6% da comiss„o do vendedor
        cout << "O total vai ficar : "  << preco_a_vista << endl;
        cout << "Comissao do vendedor : " << comissao << endl;
    }else{
        float preco_parcelado = preco_produto * 1.10; //10% aplicado em cima do valor para parcelar
        float parcela = preco_parcelado / 5; //aqui mostra os valores das parcelas divididas em 5x
        float comissao = preco_parcelado * 0.06; //comiss„o novamente sÛ que com o valor do produto parcelado
        cout << "O total parcelado (5x) : " << preco_parcelado << endl;
        cout << "Valor de cada parcela : " << parcela << endl;
        cout << "Comissao do vendedor : " << comissao << endl;
    }

    return 0;

}