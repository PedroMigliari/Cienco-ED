#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nomes[10];
    string nomeBusca;

    cout << "Digite o nome de 10 pessoas: " << endl;

    for(int i = 0; i < 10; i++)
    {
        cout << "Nome " << i + 1 << ": ";
        cin >> nomes[i];
    }

    cout << "Digite um nome para buscar: ";
    cin >> nomeBusca;

    bool encontrado = false;
    for(int i = 0; i < 10; i++)
    {
        if(nomes[i] == nomeBusca)
        {
            encontrado = true;
            break;
        }
    }

    if(encontrado = true)
    {
        cout << "ACHEI!" << endl;
    }

    else
    {
        cout << "NÃO ACHEI!" << endl;
    }
}
