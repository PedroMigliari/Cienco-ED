#include <iostream>

using namespace std;


//solicite o peso e a altura de uma determinada pessoa. Calcule IMC

int main()
{
   float peso, altura, imc;

   cout << "Informe seu peso: ";
   cin >> peso;

   cout << "Informe sua altura: ";
   cin >> altura;

   imc = peso / (altura * altura);

   if (imc < 20){
    cout << "Voce esta abaixo do peso";
   }
   else if  (imc >= 20 && imc < 25){
    cout << "Voce esta com peso ideal";
   }
   else {
    cout << "Voce esta acima do peso";
   }
}
