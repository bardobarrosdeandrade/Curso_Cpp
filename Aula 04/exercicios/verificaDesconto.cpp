#include <iostream>
#include <string>

using namespace std;

int main(){
    float precoOriginal=0, precoComDesconto=0;
    int produtosComDesconto=0;

    for(int i=1; i<6; i++){
        cout<<"Informe o preco original do produto "<< i << "-> ";
        cin>> precoOriginal;
        
        cout<<"Informe o preco do produto com desconto : " << i << "-> ";
        cin >> precoComDesconto;

        //calcula a porcentagem de desconto real
        float descontoReal = ((precoOriginal - precoComDesconto)/ precoOriginal)*100;

        //verifica se o desconto foi de pelo menos 20%, se for incrementa o contador.
        if(descontoReal >=20.0){
            produtosComDesconto++; //para incrementar quantos tem com desconto.
        }
    }
    cout<<"\nNo total, pelo menos "<< produtosComDesconto<< " produtos tiveram um desconto de pelo menos 20%";

    return 0;
}