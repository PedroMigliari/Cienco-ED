#include <iostream>

//Escreva um programa em C++ que mostre o quadrado dos números inteiros no intervalo de 1 a 20.

using namespace std;

int main()
{

    for (int i = 1; i <= 20; ++i) {
        int quadrado = i * i;
        cout << quadrado << endl;
    }

    return 0;
}
