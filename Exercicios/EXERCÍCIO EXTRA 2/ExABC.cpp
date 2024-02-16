#include <iostream>
#include <vector>

using namespace std;

int main() {
    // a.
    vector<double> taxa_juros = {0.5, 0.7, 1.0, 1.2, 1.5, 1.3, 1.8, 2.0, 1.9, 2.2, 2.5, 2.3};

    // b.
    double max_taxa = taxa_juros[0];
    double min_taxa = taxa_juros[0];
    int mes_max, mes_min;

    for (int i = 1; i < taxa_juros.size(); ++i) {
        if (taxa_juros[i] > max_taxa) {
            max_taxa = taxa_juros[i];
            mes_max = i + 1;
        }

        if (taxa_juros[i] < min_taxa) {
            min_taxa = taxa_juros[i];
            mes_min = i + 1;
        }
    }

    cout << "Mês com a taxa de juros mais alta: " << mes_max << " (Taxa: " << max_taxa << "%)" << endl;
    cout << "Mês com a taxa de juros mais baixa: " << mes_min << " (Taxa: " << min_taxa << "%)" << endl;

    // c.
    cout << "Variação percentual de mês para mês:" << endl;
    for (int i = 1; i < taxa_juros.size(); ++i) {
        double variacao_percentual = ((taxa_juros[i] - taxa_juros[i - 1]) / taxa_juros[i - 1]) * 100;
        cout << "Mês " << i << " para Mês " << (i + 1) << ": " << variacao_percentual << "%" << endl;
    }

    return 0;
}
