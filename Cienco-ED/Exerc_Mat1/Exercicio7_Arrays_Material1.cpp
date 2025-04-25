#include <iostream>

using namespace std;

/*Faça um programa em C++ que crie um vetor de 10 inteiros, coloque
peça valores ao usuário e depois imprima todos os seus conteúdos na
ordem normal e depois inversa. A impressão dos conteúdos deverá ser
feita usando ponteiro.*/


int main() {

    setlocale(LC_ALL, "Portuguese");
    int vetor[10];

    // Preenchendo o vetor com valores fornecidos pelo usuário
    cout << "Digite 10 valores inteiros para o vetor:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Valor " << i + 1 << ": ";
        cin >> *(vetor + i);
    }

    // Imprimindo o vetor na ordem normal usando ponteiros
    cout << "Vetor na ordem normal:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << *(vetor + i) << " ";
    }

    // Imprimindo o vetor na ordem inversa usando ponteiros
    cout << endl << "Vetor na ordem inversa:" << endl;
    for (int i = 9; i >= 0; i--) {
        cout << *(vetor + i) << " ";
    }

    return 0;
}
