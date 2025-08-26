#include <iostream>
using namespace std;

int main(){
    //como passar uma matriz p uma função
    
    // const N = 3;
    int matriz[3][3] = {{1, 2, 3}, {3, 4, 5}, {4, 5, 6}};
    int somaPrincipal = 0;
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(i == j){
                somaPrincipal += matriz[i][j];
            }
        }
    }
    
    cout << "a soma da diagonal principal é : " << somaPrincipal << endl;

    int somaSecundaria = 0;
    for (int i = 0; i <3; i++){
        for(int j = 0; j< 3; j++){
            if(j == 3 - 1 - 1){
                somaSecundaria += matriz[i][j];
            }
        }
    }
    cout << "a soma diagonal secundaria é :" << somaSecundaria << endl;

    return 0;
}
