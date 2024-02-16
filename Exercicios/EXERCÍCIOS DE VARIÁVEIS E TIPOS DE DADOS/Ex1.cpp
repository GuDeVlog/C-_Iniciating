#include <iostream>
using namespace std;

int main() {

    string Arma;
    int Cadencia;
    float Precisao;
    double Perfuracao;
    char Acertou;

    cout << "informe a Arma: ";
    cin >> Arma;

    cout << "informe a cadencia do tiro: ";
    cin >> Cadencia;

    cout << "informe a precisao do tiro: ";
    cin >> Precisao;

    cout << "informe a Perfuracao do tiro: ";
    cin >> Perfuracao;

    cout << "informe se o tiro acertou [S/N]: ";
    cin >> Acertou;

    cout << " " << Arma << " " << Cadencia << " " << Precisao << " " << Perfuracao << " " << Acertou;

    return 0;
} 