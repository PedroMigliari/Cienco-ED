#include <iostream>
using namespace std;

/*Faça um programa em C++ para ler e armazenar em um vetor a temperatura
média de todos os dias do ano. Calcular e escrever:
a) Menor temperatura do ano
b) Maior temperatura do ano
c) Temperatura média anual
d) O número de dias no ano em que a temperatura foi inferior a média
anual*/

int main() {
    const int DIAS_DO_ANO = 365;
    float temperaturas[DIAS_DO_ANO];
    float soma = 0.0, mediaAnual;
    float menor, maior;
    int abaixoDaMedia = 0;

    // Leitura das temperaturas médias do ano
    cout << "Digite a temperatura media de cada um dos 365 dias do ano:" << endl;
    for (int i = 0; i < DIAS_DO_ANO; i++) {
        cin >> temperaturas[i];
        soma += temperaturas[i];

        if (i == 0) {
            menor = maior = temperaturas[i];  // Inicializa com o primeiro valor
        } else {
            if (temperaturas[i] < menor) menor = temperaturas[i];
            if (temperaturas[i] > maior) maior = temperaturas[i];
        }
    }

    // Cálculo da média anual
    mediaAnual = soma / DIAS_DO_ANO;

    // Conta quantos dias ficaram abaixo da média anual
    for (int i = 0; i < DIAS_DO_ANO; i++) {
        if (temperaturas[i] < mediaAnual) {
            abaixoDaMedia++;
        }
    }

    // Resultados
    cout << "\nResultados:\n";
    cout << "a) Menor temperatura do ano: " << menor << "°C" << endl;
    cout << "b) Maior temperatura do ano: " << maior << "°C" << endl;
    cout << "c) Temperatura media anual: " << mediaAnual << "°C" << endl;
    cout << "d) Numero de dias com temperatura inferior a media anual: " << abaixoDaMedia << endl;

    return 0;
}
