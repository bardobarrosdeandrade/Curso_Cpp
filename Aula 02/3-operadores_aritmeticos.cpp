#include <iostream>
using namespace std;
#include <locale.h>  // necess�rio para setlocale()

int main() {
    setlocale(LC_ALL, "");  // Ativa locale do sistema (Windows) para suportar acentos
    int a, b;

    cout  << "digite dois numeros inteiros" << endl;
    cin >> a >> b;

    cout << "\n resultados das opera��es aritmeticas" << endl;
    cout << "soma : " << a + b << endl;
    cout << "subtra��o : " << a - b << endl;
    cout << "multiplica��o : " << a * b << endl;
    cout << "divis�o : " << a / b << endl;
    cout << "resto de divis�o (m�dulo) : " << a % b << endl;

    return 0;
}