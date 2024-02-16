#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ifstream arquivo("arquivo.txt");

    if (arquivo.is_open()) {
        string linha;
        while (getline(arquivo, linha)) {
            cout << linha;
        }
        arquivo.close();
    } else {
        cerr << "Erro ao abrir o arquivo.";
    }

    return 0;
}
