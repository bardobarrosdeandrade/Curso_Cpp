#include <iostream>
using namespace std;

int main(){
    int canal=0;
    cout<<"----- Canal de TV -----"<<endl;
    cout<<"Digite um numero do canal de TV ==> 5, 7, 11, 16 ";
    cin >> canal;

    if(canal == 5){
        cout<<"TV ponta verde";
    }else if(canal == 7){
        cout<<"TV gazeta";
    }else if(canal == 11){
        cout<<"TV pajucara";
    }else if(canal == 16){
        cout<<"TV farol";
    }else{
        cout<<"Canal invalido";
    }

    return 0;

}