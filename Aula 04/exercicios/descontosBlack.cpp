#include <iostream>
#include <string>
using namespace std;
void retornaCalc(){


}
int main(){
    float precoOriginal, precoComDesconto, desconto=20.0;
    int contador;

    for(int i=1; i<6; i++){
        cout<<"\n";
        cout<<"\nInforme o preco do produto " << i << "-> ";
        cin >> precoOriginal;
        cout<<"Preco original -> " << precoOriginal;
        precoComDesconto = precoOriginal - (precoOriginal *(desconto/100));
        cout<<"\npreco com desconto de 20%: -> "<< precoComDesconto;
        cout<<"\n";
        contador =i;
    }

    cout<<"\nNo total "<<contador<<" produtos tiveram um desconto de 20%";
    return 0;
}