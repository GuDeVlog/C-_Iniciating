#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Ativo {
    string nome;
    double preco_compra;
    int quantidade;
    double preco_atual;
};

void analisarCarteira(const vector<Ativo>& carteira) {
    double valor_total_investido = 0.0;
    double valor_total_atual = 0.0;

    // a.
    for (const Ativo& ativo : carteira) {
        valor_total_investido += ativo.preco_compra * ativo.quantidade;
        valor_total_atual += ativo.preco_atual * ativo.quantidade;
    }

    // b.
    double retorno_total_percentual = ((valor_total_atual - valor_total_investido) / valor_total_investido) * 100.0;

    cout << "Análise da Carteira de Investimentos:" << endl;
    cout << "Valor Total Investido: " << valor_total_investido << " unidades monetárias" << endl;
    cout << "Valor Total Atual: " << valor_total_atual << " unidades monetárias" << endl;
    cout << "Retorno Total: " << retorno_total_percentual << "%" << endl;
}

int main() {
    vector<Ativo> carteira = {
        {"AtivoA", 10.0, 50, 12.5},
        {"AtivoB", 25.0, 30, 22.0},
        {"AtivoC", 8.5, 75, 9.0}
    };
    
    analisarCarteira(carteira);

    return 0;
}
