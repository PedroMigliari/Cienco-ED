#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Estrutura para armazenar as informa��es do livro
struct Livro {
    string titulo;
    string autor;
    int anoPublicacao;
};

// Fun��o para registrar as informa��es de um livro
void registrarLivro(vector<Livro>& livros) {
    Livro l;

    cout << "Digite o t�tulo do livro: ";
    cin.ignore();  // Ignora o \n deixado pelo cin anterior
    getline(cin, l.titulo);

    // Condi��o para parar o programa caso o t�tulo espec�fico seja inserido
    if (l.titulo == "sair") {
        return;
    }

    cout << "Digite o autor do livro: ";
    getline(cin, l.autor);

    cout << "Digite o ano de publica��o do livro: ";
    cin >> l.anoPublicacao;

    livros.push_back(l);  // Adiciona o livro ao vetor
}

// Fun��o para exibir os dados de todos os livros registrados
void exibirLivros(const vector<Livro>& livros) {
    cout << "\nLista de Livros Registrados:\n";
    for (const auto& l : livros) {
        cout << "T�tulo: " << l.titulo << ", Autor: " << l.autor << ", Ano de Publica��o: " << l.anoPublicacao << endl;
    }
}

int main() {
    vector<Livro> livros;

    cout << "Digite 'sair' no t�tulo do livro para finalizar a entrada de dados.\n";

    while (true) {
        registrarLivro(livros);

        // Verifica se o t�tulo inserido foi o espec�fico para parar o programa
        if (livros.back().titulo == "sair") {
            break;
        }
    }

    // Exibe todos os livros registrados
    exibirLivros(livros);

    return 0;
}
