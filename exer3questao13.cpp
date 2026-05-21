// QUESTÃO 13
// Calcular o fatorial de um número.
// O número não pode ser negativo.
// Perguntar se deseja repetir.

#include <iostream>
using namespace std;

int main() {

    char opcao;

    do {

        int n;

        do {
            cout << "Digite um numero nao negativo: ";
            cin >> n;

            if (n < 0) {
                cout << "Valor invalido!\n";
            }

        } while (n < 0);

        long long fatorial = 1;

        for (int i = 1; i <= n; i++) {
            fatorial *= i;
        }

        cout << "\nFatorial de " << n << " = " << fatorial;

        do {
            cout << "\n\nDeseja calcular outro fatorial? (S/N): ";
            cin >> opcao;

            opcao = toupper(opcao);

        } while (opcao != 'S' && opcao != 'N');

    } while (opcao == 'S');

    cout << "\nPrograma encerrado.";

    return 0;
}