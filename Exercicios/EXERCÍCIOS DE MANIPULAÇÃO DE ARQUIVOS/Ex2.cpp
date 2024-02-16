#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    ifstream arquivo("arquivo.txt");

    if (arquivo.is_open()) {
        stringstream buffer;
        buffer << arquivo.rdbuf();
        string conteudo = buffer.str();

        int numero_de_palavras = 0;
        istringstream stream(conteudo);
        string palavra;
        while (stream >> palavra) {
            numero_de_palavras++;
        }

        cout << numero_de_palavras << endl;

        arquivo.close();
    } else {
        cerr << "Erro ao abrir o arquivo." << endl;
    }

    return 0;
}
