// QUESTÃO 10
// Ler 10 valores positivos e exibir:
// maior valor, soma e média.

#include <iostream>
using namespace std;

int main() {
    int valor, maior = 0, soma = 0;

    for (int i = 1; i <= 10; i++) {

        do {
            cout << "Digite um valor positivo: ";
            cin >> valor;
        } while (valor <= 0);

        soma += valor;

        if (valor > maior) {
            maior = valor;
        }
    }

    float media = soma / 10.0;

    cout << "\nMaior valor: " << maior;
    cout << "\nSoma: " << soma;
    cout << "\nMedia: " << media;

    return 0;
}