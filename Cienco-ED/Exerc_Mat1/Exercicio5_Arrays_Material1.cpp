#include <iostream>
using namespace std;

/*Faça um programa em C++ para ler um valor N qualquer (que será o
tamanho dos vetores). Após, ler dois vetores A e B (de tamanho N cada um)
e depois armazenar em um terceiro vetor Soma a soma dos elementos do
vetor A com os do vetor B (respeitando as mesmas posições) e escrever o
vetor Soma.*/


int main() {
    int N;

    // Lê o tamanho dos vetores
    cout << "Digite o tamanho dos vetores: ";
    cin >> N;

    // Aloca dinamicamente os vetores A, B e Soma
    int* A = new int[N];
    int* B = new int[N];
    int* Soma = new int[N];

    // Lê os elementos do vetor A
    cout << "Digite os elementos do vetor A:" << endl;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // Lê os elementos do vetor B
    cout << "Digite os elementos do vetor B:" << endl;
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }

    // Soma os vetores A e B elemento a elemento
    for (int i = 0; i < N; i++) {
        Soma[i] = A[i] + B[i];
    }

    // Exibe o vetor Soma
    cout << "Vetor Soma:" << endl;
    for (int i = 0; i < N; i++) {
        cout << Soma[i] << " ";
    }
    cout << endl;

    // Libera a memória alocada
    delete[] A;
    delete[] B;
    delete[] Soma;

    return 0;
}
