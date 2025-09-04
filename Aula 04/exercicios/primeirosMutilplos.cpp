#include <iostream>
using namespace std;

void retornaCal(){
    
    for(int mult=0; mult <10; mult++){
        cout << mult;
    }
}

int main(){
    int num1, num2;
    cout<<"Informe um numero: ";
    cin >> num1;
    retornaCal();

    return 0;
}