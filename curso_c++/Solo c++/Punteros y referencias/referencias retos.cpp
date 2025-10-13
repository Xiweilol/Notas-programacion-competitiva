#include <iostream>

using namespace std;


void duplicar (int& x){
    x *= 2;
}

// Reto 1, intercambio de dos variable usando referencia
void intercambiar(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}
//Reto 2: Suma y resta con referencia

void sumayresta(int& suma, int& resta, int x, int y){
    suma = x + y;
    resta = x - y;
}

//Reto 3: Normalizar 3 valores (pequeño, medio, grande)

void ordenar(int& a, int& b, int& c){
    if (a > b) intercambiar(a, b);
    if (a > c) intercambiar(a, c);
    if (b > c) intercambiar(b, c);

}
int main(){
    int n1 = 2, n2 = 3;

    intercambiar(n1,n2);

    cout << n1 << " " << n2;
    return 0;
}