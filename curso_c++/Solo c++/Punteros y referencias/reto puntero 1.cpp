#include <iostream>

using namespace std;

//haciendo intecambio entre dos valores utilizando punteros
void intercambiar(int* a, int* b){
    //variable temporal
    int temporal = *a;
    *a = *b;
    *b = temporal;
}
//sumar dos numeros usando puntero
int sumaConPuntero(int* a, int* b){
    return *a + *b;
}
//modificar arreglo usando puntero, por cada elemento multiplica por 2
void multiplicaPorDos(int* arreglo,int a){
    for (int i = 0; i < a; i++){
        *(arreglo + i) = *(arreglo + i) * 2;
    }
}

//encontrar el mayor numero de un arreglo

int encontrarMayor(int* arreglo, int b){
    int mayor = arreglo[0];
    int posicion = 0;
    for (int i = 1; i < b; i++){
        if (arreglo[i] > mayor){
            mayor = arreglo[i];
            posicion = i;
        }
    }

    return *(arreglo + posicion);
}
int main(){
    int a = 10, b = 5;
    int resulSuma = sumaConPuntero(&a,&b);
    
    cout << resulSuma;
    return 0;
}