// QUESTÃO 8
// Soma dos números positivos de 1 a 100.

#include <iostream>
using namespace std;

int main() {
    int soma = 0;

    for (int i = 1; i <= 100; i++) {
        soma += i;
    }

    cout << "Soma = " << soma;

    return 0;
}