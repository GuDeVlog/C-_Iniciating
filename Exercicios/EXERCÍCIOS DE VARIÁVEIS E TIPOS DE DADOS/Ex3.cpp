#include <iostream>
using namespace std;

const float PI = 3.14159;

int main() {
    float raio, area;

    cout << "Digite o raio do círculo: ";
    cin >> raio;

    area = PI * raio * raio;

    cout << "A área do círculo é: " << area << endl;

    return 0;
}
