#include <iostream>

using namespace std;

int soma_digitos(int numero){
    if(numero == 0){
        return 0;
    }
    
    int ultimoDigito = numero % 10;
    int restoDoNumero = numero / 10;
    
    return ultimoDigito + soma_digitos(restoDoNumero);
}

int main() {
    int numero1 = 1234;
    int resultado1 = soma_digitos(numero1);
    cout << "A soma dos dígitos de " << numero1 << " é: " << resultado1 << endl; 


    int numero2 = 905;
    int resultado2 = soma_digitos(numero2);
    cout << "A soma dos dígitos de " << numero2 << " é: " << resultado2 << endl; 

    
    return 0;
}