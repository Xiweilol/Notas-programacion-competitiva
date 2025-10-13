#include <iostream>
#include <string>

int main(){
    std::string palabra;
    std::string adjetivo;

    std::cout << "Palabra: ";
    std::cin >> palabra;

    std::cout << "Adjetivo: ";
    std::cin >> adjetivo;

    std::cout << "Resultado: " << palabra.insert(0,adjetivo);

    return 0;
}