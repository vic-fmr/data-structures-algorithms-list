#include <iostream>
#include <vector>

using namespace std;

int maiorElemento(vector<int>& vector, int n){
    if(n == 0) return 0; 

    int maior = maiorElemento(vector, n - 1);

    if(vector[n - 1] > maior){
        return vector[n - 1];
    } else {
        return maior;
    }

}

int main(){
    vector<int> numeros = {2,3,5,7,10};

    int maior = maiorElemento(numeros, numeros.size());
    cout << "Maior numero: " << maior << endl;
}