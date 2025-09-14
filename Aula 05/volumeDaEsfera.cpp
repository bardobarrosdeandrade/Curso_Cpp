#include <iostream>
using namespace std;

//funcao que calcula o volume da esfera
double volumeEsfera(double raio){
    const double PI = 3.1416;
    return (4.0 * PI * raio * raio * raio)/3.0;
}

int main(){
    double r1, r2, r3;

    cout<<"Informe o primeiro raio : ";
    cin >> r1;
    cout<<"Informe o segundo raio : ";
    cin >> r2;
    cout<<"Informe o terceiro raio : ";
    cin >> r3;

  // cchamada da funcao pra calcular os volumes
  double v1 = volumeEsfera(r1);
  double v2 = volumeEsfera(r2);
  double v3 = volumeEsfera(r3);

    cout << "\nVolume da primeira esfera -> " << v1 << endl;
    cout << "Volume da segunda esfera -> " << v2 << endl;
    cout << "Volume da terceira esfera -> " << v3 << endl;

    return 0;
}