#include <iostream>
#include <cctype>

using namespace std;

bool ehPalindromo(const string& str) {
    int inicio = 0;
    int fim = str.length() - 1;

    while (inicio < fim) {
        while (!isalnum(str[inicio]) && inicio < fim) {
            inicio++;
        }

        while (!isalnum(str[fim]) && inicio < fim) {
            fim--;
        }

        if (tolower(str[inicio]) != tolower(str[fim])) {
            return false;
        }

        inicio++;
        fim--;
    }

    return true;
}

int main() {
    string input;

    cout << "Digite uma string para verificar se é um palíndromo: ";
    cin >> input;

    if (ehPalindromo(input)) {
        cout << "A string é um palíndromo." << endl;
    } else {
        cout << "A string não é um palíndromo." << endl;
    }

    return 0;
}
