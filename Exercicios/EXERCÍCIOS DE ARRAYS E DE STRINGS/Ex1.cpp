#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    const int tamanho = 5;
    int numeros[tamanho];

    cout << "Digite " << tamanho << " números inteiros:";
    for (int i = 0; i < tamanho; ++i) {
        cin >> numeros[i];
    }

    sort(numeros, numeros + tamanho);

    cout << "Array ordenado em ordem crescente:";
    for (int i = 0; i < tamanho; ++i) {
        cout << numeros[i] << " ";
    }

    return 0;
}
