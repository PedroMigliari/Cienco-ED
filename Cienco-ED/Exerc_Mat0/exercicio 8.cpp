#include <iostream>

/*Em uma eleição presidencial existem dois candidatos.
Os votos são informados através de códigos.
Os dados utilizados para a contagem dos votos têm-se a seguinte codificação:
1,2= voto para os respectivos candidatos; 3= voto nulo;
4= voto em branco; Elabore um programa em C++ que leia o código do candidato em um voto.
Como finalizador do conjunto de votos, tem-se o valor 0.
Calcule e escreva:
(1) percentual de votos para cada candidato; (2) percentual de votos nulos; (3) percentual de votos em branco;
*/

using namespace std;

int main()
{
    int candidato1;
    int candidato2;
    int nulo;
    int branco
    int voto;
    int totalVotos;

    do {
        cout << "Digite o código do voto (1: Candidato 1, 2: Candidato 2, 3: Nulo, 4: Branco, 0: Finalizar): ";
        cin >> voto;

        switch (voto) {
            case 1:
                candidato1++;
                totalVotos++;
                break;

            case 2:
                candidato2++;
                totalVotos++;
                break;

            case 3:
                Nulo++;
                totalVotos++;
                break;

            case 4:
                Branco++;
                totalVotos++;
                break;

             case 0:
                break;

            default:
                cout << "Código inválido! Tente novamente." << endl;
        }


    return 0;
}
