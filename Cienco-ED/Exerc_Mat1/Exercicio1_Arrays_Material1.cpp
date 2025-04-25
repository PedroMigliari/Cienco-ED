#include <iostream>

using namespace std;

/*Escreva um programa em C++ que permita a leitura dos nomes de 10
pessoas e armaze os nomes lidos em um vetor. Após isto, o algoritmo
deve permitir a leitura de mais 1 nome qualquer de pessoa e depois
escrever a mensagem ACHEI, se o nome estiver entre os 10 nomes lidos
anteriormente (guardados no vetor), ou NÃO ACHEI caso contrário.*/


int main() {

    setlocale(LC_ALL, "Portuguese");

    int num_Pessoas = 10;
    string nomes[num_Pessoas];
    string nomes_Procurado;
    string achei;

    cout << "Digite o nome de 10 pessoas : " << endl;
    for (int i = 0; i < num_Pessoas; i++)
    {
        cout << "Nome " << (i + 1) << ": ";
        cin >> nomes[i];
    }

    cout << "Qual o nome que voce deseja procurar ";
    cin >> nomes_Procurado;
    for (int i = 0; i < num_Pessoas; i++)
    {
        if (nomes_Procurado == nomes[i])
        {
            achei = " Achou o nome procurado. ";
        }
        else
        {
            achei = " Nome procurado não etá na lista";
        }
    }
    cout << achei;

}


