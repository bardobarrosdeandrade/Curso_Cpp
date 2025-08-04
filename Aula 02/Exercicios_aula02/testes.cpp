#include <iostream>
using namespace std;
//usando o operador ternario no c++

int main() {
    int idade;
    cout << "digite sua idade : ";
    cin >> idade;
    idade >= 18? cout << " maior de idade " : cout << " menor de idade ";
   
    return 0;
}