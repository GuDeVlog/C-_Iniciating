#include <iostream>

using namespace std;

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int termo;

    cout << "Digite o valor de n para calcular o n-ésimo termo da sequência de Fibonacci: ";
    cin >> termo;

    int resultado = fibonacci(termo);

    cout << "O " << termo << "-ésimo termo da sequência de Fibonacci é: " << resultado << endl;

    return 0;
}
