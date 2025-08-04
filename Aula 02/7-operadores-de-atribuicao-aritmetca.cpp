#include <iostream>
using namespace std;

// estudar mais sobre

int main(){
    int x = 10;

    cout << "Atribuição aritmetica " << endl;

    cout << "Valor inicial de x : " << x << endl;

    x += 5; //  x = x + 5
    cout << "depois de x += 5 : " << x << endl;

    x -= 3; // x = x - 3
    cout << "depois de x -= 3 : " << x << endl;

    x *= 2; // x = x *2
    cout << "depois de x *= 2 : " << x << endl;

    x /= 4; // x = x / 4
    cout<< "depois de x /= 4 " << x << endl;

    x %= 3; // x = x %= 3
    cout<< "depois de x %= 3 : "<< x << endl;

    return 0;

}