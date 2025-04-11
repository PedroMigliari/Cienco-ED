#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Estrutura para armazenar as informações do livro
struct Livro {
    string titulo;
    string autor;
    int anoPublicacao;
};

// Função para registrar as informações de um livro
void registrarLivro(vector<Livro>& livros) {
    Livro l;

    cout << "Digite o título do livro: ";
    cin.ignore();  // Ignora o \n deixado pelo cin anterior
    getline(cin, l.titulo);

    // Condição para parar o programa caso o título específico seja inserido
    if (l.titulo == "sair") {
        return;
    }

    cout << "Digite o autor do livro: ";
    getline(cin, l.autor);

    cout << "Digite o ano de publicação do livro: ";
    cin >> l.anoPublicacao;

    livros.push_back(l);  // Adiciona o livro ao vetor
}

// Função para exibir os dados de todos os livros registrados
void exibirLivros(const vector<Livro>& livros) {
    cout << "\nLista de Livros Registrados:\n";
    for (const auto& l : livros) {
        cout << "Título: " << l.titulo << ", Autor: " << l.autor << ", Ano de Publicação: " << l.anoPublicacao << endl;
    }
}

int main() {
    vector<Livro> livros;

    cout << "Digite 'sair' no título do livro para finalizar a entrada de dados.\n";

    while (true) {
        registrarLivro(livros);

        // Verifica se o título inserido foi o específico para parar o programa
        if (livros.back().titulo == "sair") {
            break;
        }
    }

    // Exibe todos os livros registrados
    exibirLivros(livros);

    return 0;
}
