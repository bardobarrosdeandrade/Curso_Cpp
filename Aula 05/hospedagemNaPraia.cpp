#include <iostream>
#include <string>
using namespace std;

    float individual= 125.00, suiteDupla = 140.00, suiteTripla = 180;
    float valorTotal=0, desconto=0, valorTotalComDesconto=0;
    int diaria;
    string tipoDeApartamento;

void calculaHospedagem(int diaria, string tipoDeApartamento){
    if(tipoDeApartamento == "individual"){
        valorTotal = diaria * individual;
        desconto = valorTotal * (15.0 / 100.0);
        valorTotalComDesconto = valorTotal - desconto;
        cout<<"o valor total a ser pago sera de -> R$" << valorTotalComDesconto;

    }else if(tipoDeApartamento == "suite dupla"){
        valorTotal = diaria * suiteDupla;
        desconto = valorTotal * (15.0 / 100.0);
        valorTotalComDesconto = valorTotal - desconto;
        cout<<"o valor total a ser pago sera de -> R$" << valorTotalComDesconto;

    }else if(tipoDeApartamento == "suite tripla"){
        valorTotal = diaria * suiteTripla;
        desconto = valorTotal * (15.0 / 100.0);
        valorTotalComDesconto = valorTotal - desconto;
        cout<<"o valor total a ser pago sera de -> R$" << valorTotalComDesconto;
    }else{
        cout<<"opcao invalida";
    }

}
int main(){
    cout <<"quantos dias voce vai permanecer no hotel?" << endl;
    cin >> diaria;
    cout << "Qual o tipo de apartamento ? ";
    cin.ignore();
    cin.clear();
    getline(cin, tipoDeApartamento);
    calculaHospedagem(diaria, tipoDeApartamento);
    //se colocar o cin.ignora na ordem errada, ele ignora toda essa função do if
    //na verdade, ele ler o espaço em branco, enntão pra condição ser satisfeita, ela teria que ler o inicio, dessa forma, ela pula todos os if e vai pra o else no final. dando opção invalida como verdadeiro.

    return 0;
}