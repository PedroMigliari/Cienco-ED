#include <iostream>

//calcule o novo salário de um funcionário. Considere que o funcionário deverá
//receber um reajuste de 15% caso seu salário seja menor que 1000.
//Se o salário for maior ou igual a 1000,
//mas menor ou igual a 1500, o reajuste deve ser de 10%.
//Caso o salário seja maior que 1500, o reajuste deve ser de 5%.

using namespace std;

int main()
{
    float novoSalario;
    float salarioAtual;
    float reajuste;

    cout << "Informe seu salario: " << endl;
    cin >> salarioAtual;

    if (salarioAtual < 1000){
    reajuste = 0.15;
   }

    else if (salarioAtual >= 1000 && salarioAtual <= 1500){
    reajuste = 0.10;
   }

    else {
    reajuste = 0.05;
   }

   novoSalario = salarioAtual * reajuste + salarioAtual;

   cout << "Seu novo salario: " << novoSalario;


    return 0;
}
