#include <iostream>

using namespace std;

int main() {
    float temperaturaCelsius, temperaturaFahrenheit;

    cout << "Digite a temperatura em graus Celsius: ";
    cin >> temperaturaCelsius;

    temperaturaFahrenheit = (temperaturaCelsius * 9 / 5) + 32;

    cout << "A temperatura em graus Fahrenheit é: " << temperaturaFahrenheit;

    return 0;
}