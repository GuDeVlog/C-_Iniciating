#include <iostream>
#include <vector>
using namespace std;

void analisarVariacaoCambial(const vector<double>& moeda_base, const vector<double>& moeda_comparacao) {
    if (moeda_base.size() != moeda_comparacao.size()) {
        cerr << "Os vetores devem ter o mesmo tamanho." << endl;
        return;
    }

    double maior_variacao = 0.0;
    double menor_variacao = 0.0;
    int dia_maior_variacao = -1;
    int dia_menor_variacao = -1;

    for (int i = 1; i < moeda_base.size(); ++i) {
        double variacao_percentual = ((moeda_comparacao[i] - moeda_comparacao[i - 1]) / moeda_comparacao[i - 1]) * 100.0;

        if (i == 1 || variacao_percentual > maior_variacao) {
            maior_variacao = variacao_percentual;
            dia_maior_variacao = i;
        }

        if (i == 1 || variacao_percentual < menor_variacao) {
            menor_variacao = variacao_percentual;
            dia_menor_variacao = i;
        }
    }

    cout << "Variação Percentual Diária:" << endl;
    for (int i = 1; i < moeda_base.size(); ++i) {
        double variacao_percentual = ((moeda_comparacao[i] - moeda_comparacao[i - 1]) / moeda_comparacao[i - 1]) * 100.0;
        cout << "Dia " << i << ": " << variacao_percentual << "%" << endl;
    }

    cout << "Dia com Maior Variação: Dia " << dia_maior_variacao << " (Variação: " << maior_variacao << "%)" << endl;
    cout << "Dia com Menor Variação: Dia " << dia_menor_variacao << " (Variação: " << menor_variacao << "%)" << endl;
}

int main() {
    vector<double> moeda_base = {100.0, 105.0, 98.0, 110.0, 95.0};
    vector<double> moeda_comparacao = {120.0, 118.0, 115.0, 130.0, 110.0};

    analisarVariacaoCambial(moeda_base, moeda_comparacao);

    return 0;
}
