#include <iostream>
#include <limits>
using namespace std;
/* 
No C++ padrão, não existe uma biblioteca nativa que obtenha a cotação do dólar em tempo real. Para isso, você precisa acessar uma API de câmbio (como a do Banco Central, Alpha Vantage, ExchangeRate-API, etc.) usando requisições HTTP.

Para fazer isso em C++, normalmente utiliza-se uma biblioteca externa como:

cURL (libcurl): permite fazer requisições HTTP.
Boost.Beast ou cpp-httplib: também permitem requisições HTTP.
Exemplo de uso com cURL:
Você faria uma requisição para uma API que retorna a cotação e depois processaria o resultado no seu programa.

Resumo:
Você precisa usar uma biblioteca externa para HTTP e consumir uma API pública de câmbio. Não é possível obter a cotação em tempo real apenas com C++ puro.

*/
long double converterMoeda(long double valorReal, long double cotacaoDolar){
    //definir as taxas de conversao.
    return valorReal * cotacaoDolar;
}

int main(){
    
    long double valorReal;
    long double cotacaoDolar;
    long double valorConvertido;
    // cout<<"Precisao de long double : "<< numeric_limits<long double>::digits10<<" Digitos decimais"<<endl;
    // cout<<"Tamanho de long double: "<<sizeof(long double)<<" bytes" << endl;
    
    cout<<"Informe o valor que voce quer converter -> ";
    cin >> valorReal;
    cout<<"Informe o valor do dolar -> ";
    cin >> cotacaoDolar;
    valorConvertido = converterMoeda(valorReal, cotacaoDolar);
    cout <<"O valor em real eh -> R$" << valorConvertido<<"";

    return 0;
}