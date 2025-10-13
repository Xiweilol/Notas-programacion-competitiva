#include <iostream>

using namespace std;

int main(){
    int n; cin >> n;

    int numeroReverso = 0;
    int temporal = n;

    while ( temporal != 0){
        int digito = temporal % 10;
        //aqui el por 10 es para que se asigne un lugar a la izquierda, en vez de sumar directamente
        numeroReverso = (numeroReverso * 10) + digito;
        temporal /= 10;
    }
}