#include <iostream>
using namespace std;

int main(){
    int valor = 7;
    int *puntero = &valor;

    cout << "Anters, valor = " << valor << endl;
    
    //duplicar el valor usando puntero

    *puntero = *puntero * 2;

    cout << "Despues de duplicar usando puntero, valor = " << valor << endl;

    return 0;
}