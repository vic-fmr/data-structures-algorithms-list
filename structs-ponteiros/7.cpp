#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Contato{
    string nome;
    string contato;
};

void adicionarContato(vector<Contato>& agenda, Contato contato){
    agenda.push_back(contato);
}

Contato buscarContato(const vector<Contato>& agenda, string name){
    for(const auto& c : agenda){
        if(c.nome == name){
            return c;
        }
    }
    cout << "Contato: " << name << " não encontrado.";
}
int main() {
    // Your code here
    
}
