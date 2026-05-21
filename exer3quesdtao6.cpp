// QUESTÃO 6
// Tabuada em ordem decrescente.

#include <iostream>
using namespace std;

int main() {
    int x, a, b;

    do {
        cout << "Digite um valor positivo: ";
        cin >> x;
    } while (x <= 0);

    cout << "Digite o inicio do intervalo: ";
    cin >> a;

    do {
        cout << "Digite o final do intervalo (maior que o inicio): ";
        cin >> b;
    } while (b <= a);

    for (int i = b; i >= a; i--) {
        cout << x << " x " << i << " = " << x * i << endl;
    }

    return 0;
}