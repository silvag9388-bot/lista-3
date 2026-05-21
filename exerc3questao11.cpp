// QUESTÃO 11
// Ler N valores e exibir:
// maior, menor, soma, média,
// porcentagem de positivos e negativos.

#include <iostream>
using namespace std;

int main() {
    int n;

    do {
        cout << "Digite a quantidade de valores (menor que 20): ";
        cin >> n;
    } while (n <= 0 || n >= 20);

    int valor;
    int maior, menor;
    int soma = 0;
    int positivos = 0, negativos = 0;

    for (int i = 1; i <= n; i++) {

        cout << "Digite um valor: ";
        cin >> valor;

        soma += valor;

        if (i == 1) {
            maior = menor = valor;
        }

        if (valor > maior) {
            maior = valor;
        }

        if (valor < menor) {
            menor = valor;
        }

        if (valor >= 0) {
            positivos++;
        } else {
            negativos++;
        }
    }

    float media = soma / (float)n;
    float porcPos = (positivos * 100.0) / n;
    float porcNeg = (negativos * 100.0) / n;

    cout << "\nMaior valor: " << maior;
    cout << "\nMenor valor: " << menor;
    cout << "\nSoma: " << soma;
    cout << "\nMedia: " << media;
    cout << "\nPorcentagem positivos: " << porcPos << "%";
    cout << "\nPorcentagem negativos: " << porcNeg << "%";

    return 0;
}