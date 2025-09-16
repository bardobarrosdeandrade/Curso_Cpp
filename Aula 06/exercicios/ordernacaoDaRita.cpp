#include <iostream>
#include <algorithm> // para sort
using namespace std;

int main() {
    int padrao;
    cout << "Informe o padrao de ordenacao: ";
    cin >> padrao;

    if (padrao < 0) {
        cout << "Ordenacao cancelada." << endl;
        return 0;
    }

    int N;
    cout << "Informe o numero de elementos (1 a 10): ";
    cin >> N;

    if (N < 1 || N > 10) {
        cout << "Numero invalido de elementos." << endl;
        return 0;
    }

    int numeros[10];
    cout << "Informe os numeros: ";
    for (int i = 0; i < N; i++) {
        cin >> numeros[i];
    }

    if (padrao % 2 == 1) { // ímpar → crescente
        sort(numeros, numeros + N);
    } else { // par → decrescente
        sort(numeros, numeros + N, greater<int>());
    }

    cout << "Numeros ordenados: ";
    for (int i = 0; i < N; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}