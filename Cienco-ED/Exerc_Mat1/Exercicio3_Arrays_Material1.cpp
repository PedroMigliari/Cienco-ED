#include <iostream>
using namespace std;

int main() {
    const int TAM = 10;
    int A[TAM], M[TAM], X;

    // Lê os 10 valores para o vetor A
    cout << "Digite 10 numeros para o vetor A:" << endl;
    for (int i = 0; i < TAM; i++) {
        cin >> A[i];
    }

    // Lê o valor de X
    cout << "Digite o valor de X: ";
    cin >> X;

    // Calcula o vetor M como A[i] * X
    for (int i = 0; i < TAM; i++) {
        M[i] = A[i] * X;
    }

    // Imprime o vetor M
    cout << "Vetor M (resultado da multiplicacao de A por X):" << endl;
    for (int i = 0; i < TAM; i++) {
        cout << M[i] << " ";
    }
    cout << endl;

    return 0;
}
