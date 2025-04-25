#include <iostream>
#include <string>

/*programa que registre informações de vários
pacientes, incluindo nome, idade e um sintoma específico. O
programa deve permitir a entrada de dados para múltiplos
pacientes até que o usuário decida parar.*/

using namespace std;

struct Pacientes {
    string nome;
    int idade;
    string sintoma;
};

int main() {
    setlocale(LC_ALL, "Portuguese");
    Pacientes paciente;
    char continuar;

    do {


        cout << "Digite o nome do paciente: ";
        cin >> getline(cin, paciente.nome);

        cout << "Digite a idade do paciente: ";
        cin >> getline(cin, paciente.idade);
        cin.ignore();

        cout << "Digite o sintoma do paciente: ";
        cin >> getline(cin, paciente.sintoma);

         cout << "Deseja adicionar outro paciente? (S/N): ";
         cin >> continuar;
         cin.ignore();
       } while (continuar == 'S' || continuar == 's');

        cout << "\n--- Paciente Registrado ---\n";
        cout << "Nome: " << paciente.nome << "\n";
        cout << "Idade: " << paciente.idade << "\n";
        cout << "Sintoma: " << paciente.sintoma << "\n";

        cout << "\nDeseja cadastrar outro paciente? (S/N): ";
        cin >> continuar;
        cin.ignore(); // limpa o buffer do cin
    } while (continuar == 'S' || continuar == 's');


    return 0;

}
