#include <iostream>
using namespace std;

int main(){
    int a,b;

    cout << "digite dois numeros inteiros" << endl;
    cin >> a >> b;

    cout << "resultados das comparacoes" << endl;
    cout << "a == b ? " << (a == b) <<endl;
    cout << "a != b ? " << (a != b) << endl;
    cout << "a > b  ? " << (a > b) << endl;
    cout << "a < b  ? " << (a < b) << endl;
    cout << "a >= b ? " << (a >= b) << endl;
    cout << "a <= b ? " << (a <= b) << endl;

    return 0;
}