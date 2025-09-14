#include <iostream>
using namespace std;

int main(){

    int idade=0;

    cout <<"informe a idade do nadador :";
    cin >>idade;

    if(idade >= 5 && idade <=7){
        cout<<"Categoria : Infantil A";
    }else if(idade >= 8 && idade <=10){
        cout<<"Categoria : infantil B";
    }else if(idade >= 11 && idade <=13){
        cout<<"Categoria : Juvenil A";
    }else if(idade >= 14 && idade <=17){
        cout<<"Categoria : Juvenil B";
    }else if(idade >= 18 && idade <=40){
        cout<<"Categoria : Adulto";
    }else if(idade >=41){
        cout<<"Categoria : Master";
    }else{
        cout<<"Idade invalida";
    }

    return 0;
}