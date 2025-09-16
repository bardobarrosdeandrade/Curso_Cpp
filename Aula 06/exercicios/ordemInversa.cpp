#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int>numeros;
    int entrada;

    
    for(int i=0; i<5; i++){
        cout<<"Diigite  " << i+1 <<" de 5 valores -> ";
        cin >> entrada;
        numeros.push_back(entrada); //adiciona no vector os numeros digitados
    }
    cout<< "\nvoce digitou "<< numeros.size()  << " numeros:\n";
    for(int i = numeros.size() -1; i>=0; i--){
        cout<< numeros[i]<<" ";
    }

    //percorre e imprime em ordem
    // for(int n: numeros){
    //     cout<<n<< " ";
    // }
    
    return 0;
}