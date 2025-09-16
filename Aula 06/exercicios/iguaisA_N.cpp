#include <iostream>

using namespace std;

int main(){

    int num[11];

    for(int i=0; i<11; i++){
        cout<<"Entrada ("<< i+1 <<" de 11 numeros -> ";
        cin >> num[i];
    }
    //verifica e mostra numeros repetidos
    cout<<"\nNumeros que aparecem mais de uma vez: \n";
    for(int i=0; i<11; i++){
        bool repetido = false;
        //verifica se ja foi mostrado
        for(int k=0; k<i; k++){
            if(num[i] == num[k]){
                repetido = true;
                break;
            }
        }
        if(repetido) continue; // já mostrou esse número

        int cont = 0;
        int posicoes[11]; // array fixo p guardar as posicoes
        int qtdPos =0; //posicoes que ja foram guardadas

        for(int j=0; j<11; j++){
            if(num[i] == num[j]){
                cont++;
                posicoes[qtdPos] = j; //guarda a posicao
                qtdPos++;             //aumenta a contagem de posicoes guardadas
            }
        }
        if(cont > 1){
            cout << "O numero " << num[i] << " aparece " << cont << " vezes nas posicoes: ";
            for(int p=0; p<qtdPos; p++){
                cout << posicoes[p] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}