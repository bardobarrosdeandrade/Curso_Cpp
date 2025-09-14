#include <iostream>
using namespace std;

void classificaAluno(int faltas, float media){
    if((faltas <=10) && (media >= 9.5)){
        cout<<"Aprovado com louvor!";
    }if((faltas <=10) && (media >= 7.0)){
        cout<<"Aprovado!";
    }if((faltas <= 10) && (media < 7.0)){
        cout<<"Reprovado! para passar, eh necessario ter uma media a partir de 7";
    }if(faltas >10){
        cout<< "Reprovado por falta!";
    }
}

int main(){
    int faltas;
    float media;

    cout << "Quantidade de faltas : ";
    cin >> faltas;
    cout << "Insira sua media : ";
    cin >> media;

    cout << "/=====Relatorio final=====/" << endl;
    classificaAluno(faltas, media);

    return 0;
}