#include <iostream>
#include <locale.h>
using namespace std;

int main(){
setlocale(LC_ALL, "");  // Ativa locale do sistema (Windows) para suportar acentos

    int a =5, b=5;

    cout << "------------INCREMENTO--------- \n";

    cout << "valor inicial de a : " << a << endl;
    cout << "pré incremento (++a ) :" << ++a << endl; // incrementa antes de usar
    cout << "valor atual de a : " << a << endl;
    cout << "------------------------" << endl;
    cout << "valor inicial de b : " << b << endl;
    cout << "pós incremento (b++ )" << b++ << endl;
    cout << "valor atual de b " << b << endl; // usa, depois incrementa
    cout << "------------------------" << endl;


    cout << "------------ DECREMENTO ------------ \n " ;
    
    int x = 10, y = 10;
    cout << "------------------------" << endl;
    cout << "valor inicial do x :" << x << endl;
    cout << "pré decremento do x :" << --x << endl;
    cout << "valor atual do x :" << x << endl;
    cout << "------------------------" << endl;
    cout << "valor inicial do y :"<< y << endl;
    cout << "valor pós decremento do y : " << y << endl;
    cout << "valor atual do :y " << y << endl;
    cout << "------------------------" << endl;


}
