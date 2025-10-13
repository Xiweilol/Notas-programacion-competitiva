#include <iostream>

int encontrarMayor(int num1, int num2){

    int r = (num1 >= num2) ? num1 : num2;
    return r;
}

int main(){
    std::cout << encontrarMayor(2,7);
    
    return 0;
}