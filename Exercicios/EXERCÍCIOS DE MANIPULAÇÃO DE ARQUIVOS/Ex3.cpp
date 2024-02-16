#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    const char* dados_para_escrever = "Dados binários a serem escritos.";
    ofstream arquivo_binario("arquivo_binario.bin", ios::binary);

    if (arquivo_binario.is_open()) {
        arquivo_binario.write(dados_para_escrever, strlen(dados_para_escrever));
        arquivo_binario.close();
    } else {
        cerr << "Erro ao abrir o arquivo binário para escrita." << endl;
        return 1;
    }

    ifstream arquivo_binario_leitura("arquivo_binario.bin", ios::binary);

    if (arquivo_binario_leitura.is_open()) {
        arquivo_binario_leitura.seekg(0, ios::end);
        streampos tamanho = arquivo_binario_leitura.tellg();
        arquivo_binario_leitura.seekg(0, ios::beg);

        char* dados_lidos = new char[tamanho];
        arquivo_binario_leitura.read(dados_lidos, tamanho);

        cout << dados_lidos << endl;

        delete[] dados_lidos;
        arquivo_binario_leitura.close();
    } else {
        cerr << "Erro ao abrir o arquivo binário para leitura." << endl;
        return 1;
    }

    return 0;
}
