#include <iostream>
using namespace std;

int main(){
    int num1=0, num2=0;
    cout<<"Vamos descobrir qual o maior numero?!"<<endl;
    cout << "informe o primeiro numero :";
    cin >> num1;
    cout << "informe outro numero : ";
    cin >> num2;
    

    if(num1 > num2){
        cout << "O numero digitado " << num1 << " eh maior.";
    }else{
        cout << "O numero digitado " << num2 << " eh maior";
    }


    return 0;
}