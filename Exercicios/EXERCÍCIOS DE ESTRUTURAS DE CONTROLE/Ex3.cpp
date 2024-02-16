#include <iostream>

using namespace std;

int main() {
    for (int i = 1; i <= 100; ++i) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << "Engenheiro Salvador Arena ";
        } else if (i % 3 == 0) {
            cout << "Engenheiro ";
        } else if (i % 5 == 0) {
            cout << "Salvador Arena ";
        } else {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}
