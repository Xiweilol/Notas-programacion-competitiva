#include <iostream>

int calcularFactorial( int num){
    if (num  == 1 || num == 0){
        return 1;
    }
    return num * calcularFactorial(num - 1);
}

int main(){
    int result = calcularFactorial(3);

    std::cout << result;

    return 0;
}
