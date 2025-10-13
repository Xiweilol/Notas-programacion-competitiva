#include <iostream>

using namespace std;
int factorial (int n){
    if (n == 0 || n== 1){
        return 1;
    }

    return n * factorial(n-1);
}
// funcion donde calcula la numero de posicion de numero de fibonacci que pide el usuario
int numeroFibonacci(int n){
    
 /*
 int anterior = 0;
    int actual = 1;
    int resultado = 0;

    for (int i = 0; i < n; i++){
        resultado = anterior + actual;
        anterior = actual;
        actual = resultado;
    }

    return resultado;
 */  
    //condicion para finalizar
    if (n == 0 || n == 1){
        return 1;
    }

    return numeroFibonacci(n-1) + numeroFibonacci(n-2);

}

int main(){
    int result = numeroFibonacci(20);
    //int resultFact = factorial(5);
    //cout << "Resultado = " << result;
    cout << "Resultado factorial = " << result;
    return 0;
}