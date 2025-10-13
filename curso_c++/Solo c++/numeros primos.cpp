#include <iostream>

std::string chckPrime (int num){
    if (num <= 1){
        return "No es un primo";
    }
    if (num == 2){
        return "Si es primo";
    }
    for (int i = 2; i <= num; i++){
        if (num % i == 0){
            return "No es un primo";
        }
    }
    return "Es un primo";
}

int main(){
    std::string primoONo =  chckPrime(4);

    std:: cout << primoONo;
    return 0;
}