#include <iostream>
using namespace std;


/*Faça um programa em C++ para ler 20 números e armazenar em um vetor.
Após a leitura total dos 20 números, o algoritmo deve escrever esses 20
números lidos na ordem inversa.*/

int main() {
    const int TAM = 20;
    int numeros[TAM];

    // Leitura dos 20 números
    cout << "Digite 20 numeros:" << endl;
    for (int i = 0; i < TAM; i++) {
        cin >> numeros[i];
    }

    // Impressão dos números na ordem inversa
    cout << "Numeros na ordem inversa:" << endl;
    for (int i = TAM - 1; i >= 0; i--) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}
