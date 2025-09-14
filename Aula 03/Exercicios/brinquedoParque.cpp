#include <iostream>
using namespace std;

int main(){
    int idade=0;
    float altura=0;
    // bool podeEntrar = true;
    int podeEntrar=0,total=3;

    cout<<"digite sua idade :";
    cin >> idade;
    cout<<"Digite sua altura em cm (1.5):";
    cin >> altura;
    
    cout <<"Verificando quais brinquedos voce pode entrar...  "<<endl;
    if(idade >= 12 && altura >= 1.5 ){
        cout<<"-Barca viking"<<endl;
        // podeEntrar = true;
        podeEntrar++;
    }if(idade >= 14 && altura >=1.4){
        cout<<"-Elevator of Death"<<endl;
        // podeEntrar = true;
        podeEntrar++;
    }if(idade >= 16 && altura >=1.7){
        cout<<"-Final Killer"<<endl;
        // podeEntrar = true;
        podeEntrar++;
    }else if(podeEntrar ==0){
        cout<<"nao tem brinquedo disponivel pra voce"<<endl;
    }   
    cout<<"total => " << podeEntrar << " de "<< total <<" brinquedos ";
    
    return 0;
}