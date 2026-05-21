// QUESTÃO 3
// Aceitar somente “F” ou “M”.

#include <iostream>
using namespace std;

int main() {
    char sexo;

    do {
        cout << "Digite o sexo (F/M): ";
        cin >> sexo;

        sexo = toupper(sexo);

    } while (sexo != 'F' && sexo != 'M');

    cout << "Sexo valido.";

    return 0;
}