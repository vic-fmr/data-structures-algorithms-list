#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Livro{
    string titulo;
    string autor;
    int ano;
};

vector<Livro> filtrarLivros(const vector<Livro>& biblioteca, int anoBase){

    vector<Livro> livrosFiltrados;

    for(const auto& l : biblioteca){
        if(l.ano >= anoBase){
            livrosFiltrados.push_back(l);
        }
    }

    return livrosFiltrados;
}

void exibirLivros(const vector<Livro> livros){
    for(const auto& l : livros){
        cout << "Titulo: " << l.titulo << endl;
        cout << "Autor: " << l.autor << endl;
        cout << "Ano: " << l.ano << endl;
    }
}

int main(){

    vector<Livro> biblioteca = {
        {"O Enigma da Lua", "Carlos Silva", 1998},
        {"A Jornada Perdida", "Ana Souza", 2005},
        {"Mistério no Vale", "Bruno Lima", 2012},
        {"Segredos do Tempo", "Marina Costa", 2020},
        {"O Último Guardião", "Felipe Alves", 2017},
        {"Sombras do Passado", "Juliana Rocha", 2010},
        {"A Ilha dos Sonhos", "Lucas Pereira", 2003},
        {"Caminhos Cruzados", "Fernanda Dias", 2015},
        {"O Código Esquecido", "Rafael Torres", 2022},
        {"Luz e Trevas", "Patrícia Mendes", 1995}
    };
    
    vector <Livro> livrosFiltrados;
    int anoBase;

    cout << "Insira o ano minimo de lançamento do livro: " << endl;
    cin >> anoBase;

    livrosFiltrados = filtrarLivros(biblioteca, anoBase);
    exibirLivros(livrosFiltrados);
}