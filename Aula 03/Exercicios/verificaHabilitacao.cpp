#include <iostream>
using namespace std;

int main(){
    int anoNasc=0, anoAtual=0;

    cout << "verifica habilitacao" << endl;

    cout << "Informe o ano que voce nasceu :";
    cin >> anoNasc;
    cout << "Qual o ano atual? :";
    cin >> anoAtual;

    int resultado = anoAtual - anoNasc;

    if(resultado >= 18){
        cout << "Em "<< anoAtual << " Voce tem "<< resultado<<" anos, pode tirar a habilitacao!";
    }else{
        cout << "Em "<< anoAtual << " Voce tem "<< resultado<<" anos, nao pode tirar a habilitacao!";       
    }

    return 0;
}