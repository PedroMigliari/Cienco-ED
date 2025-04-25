#include <iostream>

//dada a idade de um nadador, classifique-o em uma das seguintes categorias:
//infantil A (de 5 a 7 anos),
//infantil B (de 8 a 10 anos), juvenil A (de 11 a 13 anos),
//juvenil B (14 a 17 anos) e senior (maior que 17 anos)

using namespace std;

int main()
{
   int idade;
   string categoria;

   cout << "Informe a idade do nadador : ";
   cin >> idade;

   if (idade < 5){
    categoria = "Nadador sem classificacao";
   }

   else if (idade <= 7){
    categoria = "Infantil A";
   }

   else if (idade >= 8 & idade <=10){
    categoria = "Infantil B";
   }

   else if (idade >= 11 & idade <=13){
    categoria = "Juvenil A";
   }

   else if (idade >= 14 & idade <=17){
    categoria = "Juvenil B";
   }

    else {
    categoria = "Senior";
   }

   cout << "Classificacao do nadador: " << categoria;



   return 0;
}
