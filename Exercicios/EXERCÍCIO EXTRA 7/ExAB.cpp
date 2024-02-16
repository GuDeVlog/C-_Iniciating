#include <iostream>
#include <vector>
using namespace std;

vector<double> calcularMediaMovel(const vector<double>& demanda_mensal, int periodo) {
    vector<double> media_movel;

    if (periodo <= 0 || periodo > demanda_mensal.size()) {
        cerr << "Período inválido." << endl;
        return media_movel;
    }

    for (int i = periodo - 1; i < demanda_mensal.size(); ++i) {
        double soma = 0.0;
        for (int j = i - periodo + 1; j <= i; ++j) {
            soma += demanda_mensal[j];
        }
        media_movel.push_back(soma / periodo);
    }

    return media_movel;
}

int main() {
    vector<double> demanda_mensal = {100.0, 120.0, 150.0, 130.0, 160.0, 140.0, 180.0, 170.0, 200.0};

    int periodo;
    cout << "Digite o período para a média móvel: ";
    cin >> periodo;

    vector<double> media_movel = calcularMediaMovel(demanda_mensal, periodo);

    cout << "Demanda Mensal: ";
    for (double demanda : demanda_mensal) {
        cout << demanda << " ";
    }
    cout << endl;

    cout << "Média Móvel para o Período " << periodo << " meses: ";
    for (double media : media_movel) {
        cout << media << " ";
    }
    cout << endl;

    return 0;
}
