#include <iostream>
#include <string>
using namespace std;
//identificar numeros primos

string numerosPrimos(int n){

    if ( n== 1){
        return "No es primo";
    }


    for (int i = 2; i < n;i++){
        // calculoamos la operacion con el modulo, si da cero significa que tiene otro divisor
        if (n % i ==0){
            return "No es primo";
        }

    }

    return "Si es primo";

}

// factorial un numero

int factorial(int n){
    
}



int main(){

    int numeroFactorial = factorial(4);

    cout << numeroFactorial;

    return 0;
}