#include <iostream>
using namespace std;

int main(){
    //primeiro o valor das linhas[] e segundo o valor da coluna[].

    int matriz[2][2] = {{1, 2}, {2,4}};

    // [[1][2]]
    // [[3][4]]

    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[1][0] = 3;
    matriz[1][1] = 4;

    cout << matriz[0][0] << "";
    cout << matriz[0][1] << endl;
    cout << matriz[1][0] << "";
    cout << matriz[1][1] << endl;

    return 0;
}