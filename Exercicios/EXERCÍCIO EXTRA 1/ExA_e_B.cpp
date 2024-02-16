#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<double> precos_commodities = {150.5, 1800.2, 25.8, 12.3, 5.7};

    //Letra A)
    double preco_maximo = *max_element(precos_commodities.begin(), precos_commodities.end());
    double preco_minimo = *min_element(precos_commodities.begin(), precos_commodities.end());

    cout << "Preço máximo: " << preco_maximo << endl;
    cout << "Preço mínimo: " << preco_minimo << endl;

    //Letra B)
    double soma_precos = 0.0;
    for (double preco : precos_commodities) {
        soma_precos += preco;
    }

    double media_precos = soma_precos / precos_commodities.size();
    
    cout << "Média de preços: " << media_precos << endl;

    return 0;
}
