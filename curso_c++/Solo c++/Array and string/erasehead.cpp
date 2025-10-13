#include <iostream>
#include <string>

int main(){
    std::string frase;
    int posicion;

    std::cout << "Frase: " ;
    std::getline(std::cin,frase);

    std::cout << "Número de caracteres a borrar: ";
    std::cin >> posicion;

    frase.erase(0,posicion);

    std::cout << "Frase modificado: " << frase;

    return 0;
    
}