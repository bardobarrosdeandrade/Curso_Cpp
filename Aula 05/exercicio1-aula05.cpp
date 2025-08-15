#include <iostream>
using namespace std;
//máximo 10 faltas por semestre
//média mínima 7 
//queles que não excedem o limite de faltas e conseguem média igual ou superior a 9,5 são aprovados com louvor.

void classificaAluno(float media, int falta){
    
    
    if (media >= 9.5 && falta <=10){
        cout << "Aprovado com louvor";
    }else if(media >=7 && falta <= 10){
        cout << "aprovado";
    }else if(falta >10 && media >=7 ){
        cout << "Reprovado por falta";
    }else{
        cout << "Reprovado";
    }
}

int main(){
    float media;
    int  falta;
    cout << "informe sua media: ";
    cin >> media;
    cout <<"informe as faltas: ";
    cin >> falta;
    classificaAluno(media, falta);
  
      
    return 0;
}