#include <iostream>

using namespace std;

int calcularMaximo(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1, num2;

    cout << "Digite dois números inteiros: ";
    cin >> num1 >> num2;

    int maximo = calcularMaximo(num1, num2);

    cout << "O máximo entre " << num1 << " e " << num2 << " é: " << maximo << endl;

    return 0;
}
