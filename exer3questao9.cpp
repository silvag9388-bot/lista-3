// QUESTÃO 9
// Exibir os 30 primeiros termos da sequência de Fibonacci.

#include <iostream>
using namespace std;

int main() {
    int a = 1, b = 1, c;

    cout << a << " " << b << " ";

    for (int i = 3; i <= 30; i++) {
        c = a + b;
        cout << c << " ";

        a = b;
        b = c;
    }

    return 0;
}