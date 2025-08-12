#include <iostream>
using namespace std;


 int main(){
    int contador = 0;
    
    while (true){
    int idade = 0 ;
    cout << "informe a idade? : " << contador +1 << endl;
    cin >> idade;

    if (idade < 0){
        break;
    }
    if (idade >= 19){
        cout << "maior de idade. \n";
    }
    else {
        cout << "menor de  idade. ";
    }break;
  }
    return 0;
}