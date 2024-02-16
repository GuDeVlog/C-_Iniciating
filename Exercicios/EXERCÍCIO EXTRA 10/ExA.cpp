#include <iostream>
#include <cmath>
#include <string>
using namespace std;

string converterBase(string numero, int base_origem, int base_destino) {
    int decimal = 0;
    int tamanho = numero.size();

    for (int i = 0; i < tamanho; ++i) {
        int digito = (isdigit(numero[i])) ? (numero[i] - '0') : (toupper(numero[i]) - 'A' + 10);
        decimal += digito * pow(base_origem, tamanho - i - 1);
    }

    string resultado = "";
    while (decimal > 0) {
        int resto = decimal % base_destino;
        char digito = (resto < 10) ? (resto + '0') : (resto - 10 + 'A');
        resultado = digito + resultado;
        decimal /= base_destino;
    }

    return (resultado.empty()) ? "0" : resultado;
}

int main() {
    string numero;
    int base_origem, base_destino;

    cout << "Digite o número a ser convertido: ";
    cin >> numero;

    cout << "Digite a base de origem (2 a 10): ";
    cin >> base_origem;

    cout << "Digite a base de destino (2 a 10): ";
    cin >> base_destino;

    if (base_origem < 2 || base_origem > 10 || base_destino < 2 || base_destino > 10) {
        cerr << "Bases inválidas. Digite valores entre 2 e 10." << endl;
        return 1;
    }

    string resultado = converterBase(numero, base_origem, base_destino);

    cout << "Resultado da conversão: " << resultado << endl;

    return 0;
}
