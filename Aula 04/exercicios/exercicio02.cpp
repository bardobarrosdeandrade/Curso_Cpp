#include <iostream>
using namespace std;


 int main(){
    
    int contador = 0;
    
    while (contador < 5){
    int idade = 0 ;
    cout << "informe a idade?" << contador +1 << endl;
    cin >> idade;

    if (idade >= 18){
        cout << "maior de idade";
    }else {
        cout << "menor de idade";
    }
    
    contador ++;
    
  }
    return 0;
}