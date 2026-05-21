// QUESTÃO 5
// Digitar um valor positivo e exibir a tabuada de 1 a 10.

#include <iostream>
using namespace std;

int main() {
    int valor;

    do {
        cout << "Digite um valor positivo: ";
        cin >> valor;
    } while (valor <= 0);

    for (int i = 1; i <= 10; i++) {
        cout << valor << " x " << i << " = " << valor * i << endl;
    }

    return 0;
}