#include <iostream>

int calcularFatorial(int numero) {
    if (numero == 0 || numero == 1) {
        return 1;
    }
    return numero * calcularFatorial(numero - 1);
}

int main() {
    int n;

    std::cout << "Digite um número para calcular o fatorial: ";
    std::cin >> n;

    if (n < 0) {
        std::cerr << "Fatorial não definido para números negativos." << std::endl;
        return 1;
    }

    int resultado = calcularFatorial(n);

    std::cout << "O fatorial de " << n << " é: " << resultado << std::endl;

    return 0;
}
