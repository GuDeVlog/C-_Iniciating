#include <iostream>

int calcularSomaPares(int n) {
    int soma = 0;
    for (int i = 2; i <= n; i += 2) {
        soma += i;
    }
    return soma;
}

int main() {
    int n;

    std::cout << "Digite um número para calcular a soma dos pares: ";
    std::cin >> n;

    if (n < 0) {
        std::cerr << "A soma dos pares não está definida para números negativos." << std::endl;
        return 1;
    }

    int resultado = calcularSomaPares(n);

    std::cout << "A soma dos números pares de 1 a " << n << " é: " << resultado << std::endl;

    return 0;
}
