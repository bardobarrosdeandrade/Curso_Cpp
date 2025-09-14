#include <iostream>
#include <string>
#include <iomanip> //decimais
#include <cctype> //tolower da biblioteca cctype, ele converte um unico caractere para minusculo se for maiusculo
#include <algorithm> //transform É uma função da biblioteca <algorithm> do C++ que aplica uma operação em cada elemento de um intervalo (como um for disfarçado).
#include <limits> // para numeric_limits
/* (string &s)
➡️ chama-se referência em C++ (reference).
É uma forma de passar variáveis por referência para funções (ou criar apelidos para objetos) */

using namespace std;
string diaSemana, nomeProduto, opcaoProduto;
float precoProduto = 0;
//pra sair o valor com decimais 10.89 exemplo
float precoFinal = precoProduto;
//pra validar se tem algum caracter na entrada de texto 

//NO C++ É MELHOR PASSAR O PARAMETRO COMO REFERENCIA.. '&' ASSIM A FUNÇÃO VAI ALTERAR DIRETAMENTE AS VARIAVEIS DO MAIN.

int validacaoDeEntrada(string = diaSemana, string = nomeProduto, float = precoProduto, string = opcaoProduto){
//validação de entrada de entrada de texto

    //dia da semana
    do{
        cout << "informe o dia da semana: ";
        getline(cin, diaSemana);
        // cin.ignore();
        if(diaSemana.empty()){
            cout<<"\nEntrada vazia. passe uma informacao valida\n";
        }
    }while(diaSemana.empty());

    //nome do produto
    do{
        cout << "informe o nome do produto: ";
        getline(cin, nomeProduto);
        // cin.ignore();
        if (nomeProduto.empty()){
            cout<<"\nEntrada vazia. passe uma informacao valida\n";
        }
    }while (nomeProduto.empty());

    /* não consegui validar o preco do produto ao apertar enter sem nada no teclado, somente quando digita uma string */
    //preco produto
    while (true) {
    cout << "Informe o preco do produto: ";
    if (cin >> precoProduto && precoProduto >= 0) {
        break; // deu certo
    } else {
        cout << "Entrada invalida. Passe um valor valido.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}
// Limpa o Enter que sobrou no buffer antes do próximo getline
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    
    cin.clear();
    //opcao do produto prata ou ouro
    //ta pedindo 2x pra informar e eu não sei porque 
    do{
        cout << "informe a opcao (prata) ou (ouro): ";
        getline(cin, opcaoProduto);
        // cin.ignore();
        if (opcaoProduto.empty()){
            cout<<"\nEntrada vazia. passe uma informacao valida\n";
        }
    }while (opcaoProduto.empty());
    

    return 0;

}
/* pensei em fazer uma validacao pra pedir o kg do produto, verdura etc, e dar um valor de kg como uma constante e calcular o valor final de pagar a depender de quantos kg foi comprado */
void resultado(){

    if ((diaSemana == "segunda" || diaSemana == "terca" || diaSemana == "quarta") && opcaoProduto == "ouro"){
        precoFinal = precoProduto / 2; //se a condicao for verdadeira metade do preco
    }else if ((diaSemana == "quinta" || diaSemana == "sexta")  && (precoProduto >= 10.00 && precoProduto <= 100.00)){
        precoFinal = precoProduto / 3; //condicao verdadeira, entao o preco vai ser 1 terco do proprio valor 
    }else if (diaSemana == "sabado" && opcaoProduto == "prata"){
        precoFinal = precoProduto * 3;
    }else{
        precoFinal = precoProduto * 2;
    }
}
void converteMaiuscula(string &s){
    /* com for, (s) vai ser a variavel que vai receber, sendo possivel utilizar essa função em qualquer local, basta chamar 
    percorrendo a entrada de texto e convertendo tudo pra minuscula pra não dar erro
    */
    for (int i=0; i < s.size(); i++){
            s[i] = tolower(s[i]);
        } 
}


int main(){ 
    

    validacaoDeEntrada(diaSemana, nomeProduto, precoProduto, opcaoProduto);
    converteMaiuscula(diaSemana);
    converteMaiuscula(nomeProduto);
    converteMaiuscula(opcaoProduto);
    cout << fixed << setprecision(2);
    
    resultado();

    cout<<"\no preco do produto "<<nomeProduto <<" no dia de "<<diaSemana <<" na opcao "<< opcaoProduto <<" eh "<< " R$"<< precoFinal<<"\n";
    
   //com a biblioteca algorithm  pegando cada caractere de diasemana passando pra função tolower p substituir o caractere original pelo resultado
     /* transform(nomeProduto.begin(), nomeProduto.end(), nomeProduto.begin(), ::tolower);
     transform(diaSemana.begin(), diaSemana.end(), diaSemana.begin(), ::tolower);
     transform(opcaoProduto.begin(), opcaoProduto.end(), opcaoProduto.begin(), ::tolower); */


    return 0;
}