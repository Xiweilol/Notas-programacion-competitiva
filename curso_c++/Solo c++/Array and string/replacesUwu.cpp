#include <iostream>
#include <string>

int main(){
    std::string frase;
    
    std::cout << "Frase: ";
    std::getline(std::cin,frase);
 
    if (frase.find("triste") != std::string::npos){
        int posicion = frase.find("triste");
        frase.replace(posicion,6,"feliz");
        std:: cout << "Frase modificado: " << frase;
    }

    return 0;
}