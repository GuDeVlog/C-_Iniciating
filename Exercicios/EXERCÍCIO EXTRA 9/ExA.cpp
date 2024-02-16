#include <iostream>
using namespace std;

int calcularPontoEquilibrio(double custo_fixo_total, double preco_venda_por_unidade, double custo_variavel_por_unidade) {
    if (custo_variavel_por_unidade == 0.0) {
        cerr << "O custo não pode ser zero." << endl;
        return -1;
    }

    int ponto_equilibrio = custo_fixo_total / (preco_venda_por_unidade - custo_variavel_por_unidade);

    return ponto_equilibrio;
}

int main() {
    double custo_fixo_total = 10000.0;
    double preco_venda_por_unidade = 50.0;
    double custo_variavel_por_unidade = 30.0;

    int ponto_equilibrio = calcularPontoEquilibrio(custo_fixo_total, preco_venda_por_unidade, custo_variavel_por_unidade);

    if (ponto_equilibrio != -1) {
        cout << "Para atingir o ponto de equilíbrio, é necessário vender " << ponto_equilibrio << " unidades." << endl;
    }

    return 0;
}
