#include <iostream>

//sobrecarga de clases son aquellas que tiene mismo nombre de funcion pero diferente tipo de parametros en c++
//vamos a utilizar funciones prototipos
int valorAbsoluto(int var);
float valorAbsoluto(float var);

int main(){
    std::cout << "Se supone que es un numero positivo de un numero entero: " << valorAbsoluto(-5) << std::endl;
    std::cout << "Se supone que es un numero positivo de un numero flotante: " << valorAbsoluto(-3.4f) << std::endl;
}

int valorAbsoluto(int var){
    if (var < 0){
        var = -var;
    }
    return var;
}

float valorAbsoluto(float var){
    if (var < 0.0){
        var = -var;
    }
    return var;
}