#include <iostream>

//Faça um programa em C++ que receba o número de horas trabalhadas e o valor do salário mínimo. Calcule e mostre o salário a receber seguindo as regras abaixo:
//a. A hora trabalhada vale a metade do salário mínimo;
//b. O salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada
//c. O imposto equivale a 3% do salário bruto;
//d.O salário a receber equivale ao salário bruto menos o imposto.


using namespace std;

int main()
{
    float horasTrabalhadas;
    float salarioMinimo;
    float salarioReceber;
    float numeroHoras;
    float salarioBruto;
    float imposto;


    cout << "Digite as horas trabalhadas: " << endl;
    cin >> horasTrabalhadas;

    cout << "Digite o valor do salario minimo: " << endl;
    cin >> salarioMinimo;

    horasTrabalhadas = salarioMinimo / 2;
    salarioBruto = numeroHoras * horasTrabalhadas;
    imposto = salarioBruto * 3/100;
    salarioReceber = salarioBruto - imposto;

    cout << "Salario Bruto: " << salarioBruto << endl;
    cout << "Salario a receber: " << salarioReceber << endl;



    return 0;
}
