#include <iostream>

using namespace std;

int main() {
    string str1, str2;

    cout << "Digite a primeira string: ";
    cin >> str1;

    cout << "Digite a segunda string: ";
    cin >> str2;

    str1 += str2;

    cout << "Strings concatenadas: " << str1 << endl;

    return 0;
}
