#include <iostream>
#include <cctype>

using namespace std;

int contarVogais(const string& str) {
    int contagem = 0;
    for (char c : str) {
        char lowercase = tolower(c);
        if (lowercase == 'a' || lowercase == 'e' || lowercase == 'i' || lowercase == 'o' || lowercase == 'u') {
            contagem++;
        }
    }
    return contagem;
}

int main() {
    string input;

    cout << "Digite uma string: ";
    cin >> input;

    int vogais = contarVogais(input);

    cout << "Número de vogais na string: " << vogais;

    return 0;
}
