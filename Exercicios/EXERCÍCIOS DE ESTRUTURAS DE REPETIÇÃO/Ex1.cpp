#include <iostream>

bool ehPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    for (int i = 2; i * i <= numero; ++i) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;

    std::cout << "Digite a quantidade de números primos desejados: ";
    std::cin >> n;

    int contador = 0;
    int numeroAtual = 2;

    while (contador < n) {
        if (ehPrimo(numeroAtual)) {
            std::cout << numeroAtual << " ";
            contador++;
        }
        numeroAtual++;
    }

    return 0;
}
