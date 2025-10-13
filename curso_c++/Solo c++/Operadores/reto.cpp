#include <iostream>

using namespace std;

int calcularSuma ( int num1, int num2,int num3){
    return num1 + num2 + num3;
}

int main(){
    int result = calcularSuma(2,3,4);

    cout << "el resultado de la suma es: " << result;

    return 0;
}

