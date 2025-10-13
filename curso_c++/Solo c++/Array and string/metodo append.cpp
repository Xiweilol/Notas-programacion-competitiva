#include <iostream>
#include <string>

int main(){
    std::string nombre;
    std::string apellido;
    std::string juntos;

    std:: cout << "Escriba su nombre: ";
    std:: cin >> nombre;
    juntos.append(nombre);

    std::cout << "Escriba su apellido: ";
    std:: cin >> apellido;

    juntos.append(" ");
    juntos.append(apellido);


    std::cout << "su nombre completo es: " << juntos;

    return 0;

}