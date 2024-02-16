#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Pais {
    string nome;
    double pib;
    double taxa_inflacao;
    double taxa_desemprego;
};

// a. 
Pais encontrarMaiorPIB(const vector<Pais>& dados_economicos) {
    double maior_pib = dados_economicos[0].pib;
    int indice_maior_pib = 0;

    for (int i = 1; i < dados_economicos.size(); ++i) {
        if (dados_economicos[i].pib > maior_pib) {
            maior_pib = dados_economicos[i].pib;
            indice_maior_pib = i;
        }
    }

    return dados_economicos[indice_maior_pib];
}

// b. 
double calcularMediaInflacao(const vector<Pais>& dados_economicos) {
    double soma_inflacao = 0.0;

    for (const Pais& pais : dados_economicos) {
        soma_inflacao += pais.taxa_inflacao;
    }

    return soma_inflacao / dados_economicos.size();
}

int main() {
    vector<Pais> dados_economicos = {
        {"Brasil", 1.5, 3.2, 12.0},
        {"EUA", 21.4, 1.8, 4.3},
        {"China", 15.2, 2.5, 5.8},
        {"Índia", 2.9, 4.0, 6.5},
        {"Alemanha", 4.3, 1.0, 3.7}
    };

    // a. Resultado
    Pais pais_maior_pib = encontrarMaiorPIB(dados_economicos);
    cout << "País com maior PIB: " << pais_maior_pib.nome << " (PIB: " << pais_maior_pib.pib << " trilhões)" << endl;

    // b. Resultado
    double media_inflacao = calcularMediaInflacao(dados_economicos);
    cout << "Média de inflação entre os países: " << media_inflacao << "%" << endl;

    return 0;
}
