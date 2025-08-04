#include <iostream>
using namespace std;
#include <locale.h>  // necessário para setlocale()

int main() {
    setlocale(LC_ALL, "");  // Ativa locale do sistema (Windows) para suportar acentos
    int a, b;

    cout  << "digite dois numeros inteiros" << endl;
    cin >> a >> b;

    cout << "\n resultados das operações aritmeticas" << endl;
    cout << "soma : " << a + b << endl;
    cout << "subtração : " << a - b << endl;
    cout << "multiplicação : " << a * b << endl;
    cout << "divisão : " << a / b << endl;
    cout << "resto de divisão (módulo) : " << a % b << endl;

    return 0;
}