#include <iostream>
#include <vector>

using namespace std;

struct RelatorioTrimestral {
    double pib;
    double exportacoes;
    double importacoes;
};

// a. 
double calcularCrescimentoPIB(const RelatorioTrimestral& trimestre_atual, const RelatorioTrimestral& trimestre_anterior) {
    return ((trimestre_atual.pib - trimestre_anterior.pib) / trimestre_anterior.pib) * 100.0;
}

// b. 
void gerarSumarioAnual(const vector<RelatorioTrimestral>& relatorios) {
    double soma_exportacoes = 0.0;
    double soma_importacoes = 0.0;

    for (const RelatorioTrimestral& trimestre : relatorios) {
        soma_exportacoes += trimestre.exportacoes;
        soma_importacoes += trimestre.importacoes;
    }

    double media_exportacoes = soma_exportacoes / relatorios.size();
    double media_importacoes = soma_importacoes / relatorios.size();

    cout << "Sumário Anual:" << endl;
    cout << "Média de Exportações: " << media_exportacoes << " milhões" << endl;
    cout << "Média de Importações: " << media_importacoes << " milhões" << endl;
}

int main() {
    vector<RelatorioTrimestral> relatorios = {
        {10.5, 3.2, 2.5},
        {12.0, 3.5, 2.7},
        {11.8, 3.8, 2.9},
        {13.2, 4.0, 3.1}
    };

    // a. Resultado
    for (int i = 1; i < relatorios.size(); ++i) {
        double crescimento_pib = calcularCrescimentoPIB(relatorios[i], relatorios[i - 1]);
        cout << "Crescimento do PIB no Trimestre " << (i + 1) << ": " << crescimento_pib << "%" << endl;
    }

    // b. Média das Exportaçôes
    gerarSumarioAnual(relatorios);

    return 0;
}
