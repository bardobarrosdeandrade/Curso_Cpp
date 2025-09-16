#include <iostream>
#include <algorithm> // p usar a função swap(troca os valores de duas variaves)
using namespace std;

void imprimirvalor(int numeros[], int tamanho) {
for (int i = 0; i < tamanho; i++) {
    cout << numeros[i] << " ";
  }
  cout << endl;
}

void bubbleSort(int valor[], int tamanho) {
    int passo=1; //contador de trocas

    for (int i = 0; i < tamanho - 1; i++) {
      bool trocou = false; // reinicia a cada rodada

      for (int j = 0; j < tamanho - 1 - i; j++) {
          if (valor[j] > valor[j + 1]) {
              swap(valor[j], valor[j + 1]);
              trocou = true;
                //   int temp = valor[j];
                //   valor[j] = valor[j + 1];
                //   valor[j + 1] = temp;
              cout<<"Passo "<< passo++ <<": ";
              imprimirvalor(valor, tamanho);
            }
        }
        if(!trocou) break; // se n trocar, já está ordenado.
    }
}


int main() {
    int valor[10];
    cout<< "informe cada numero da sequencia ->";
    for(int i=0; i<10; i++){
        cin >> valor[i];
    }
    
    cout<<"\nAlgoritmo do Buble Sort passo a passo: "<<endl;
    imprimirvalor(valor, 10);//estado inicial
    bubbleSort(valor, 10);
    
    // cout<<"Resultado final ordenado: ";
    // imprimirvalor(valor, 10);
    
    
    return 0;
}