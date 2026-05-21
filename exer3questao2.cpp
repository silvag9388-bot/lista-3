// QUESTÃO 2
// Entrar com dois valores, onde o segundo deve ser maior que o primeiro.

#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Digite o primeiro valor: ";
    cin >> a;

    do {
        cout << "Digite o segundo valor (maior que o primeiro): ";
        cin >> b;
    } while (b <= a);

    cout << "Valores aceitos.";

    return 0;
}