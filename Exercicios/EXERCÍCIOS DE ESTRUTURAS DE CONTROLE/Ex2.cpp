#include <iostream>

using namespace std;

int main() {
    int numero1, numero2, numero3;

    cout << "Digite três números: ";
    cin >> numero1 >> numero2 >> numero3;

    int maior = numero1;

    if (numero2 > maior) {
        maior = numero2;
    }

    if (numero3 > maior) {
        maior = numero3;
    }

    cout << "O maior número é: " << maior << endl;

    return 0;
}
