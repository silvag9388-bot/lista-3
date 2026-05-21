// QUESTÃO 7
// Exibir tabuadas de 1 a 20.

#include <iostream>
using namespace std;

int main() {

    for (int n = 1; n <= 20; n++) {

        cout << "\nTABUADA DO " << n << endl;

        for (int i = 1; i <= 10; i++) {
            cout << n << " x " << i << " = " << n * i << endl;
        }
    }

    return 0;
}