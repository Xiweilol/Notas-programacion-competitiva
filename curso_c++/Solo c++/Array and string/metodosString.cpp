#include <iostream>

using namespace std;

int main(){

    string str = "hola mundo, hermosa mundo";
    cout << "String: " << str << endl;

    size_t primeroQueEncuentra = str.find("mundo");
    size_t ultimoCoincidencia = str.rfind("mundo");

    if (primeroQueEncuentra != string::npos){
        cout << "Primero encontrado: 'mundo' encontrado en la posicion: " << primeroQueEncuentra << endl;
        cout << "En la posicion reversa : 'mundo' encontrado en la posicion: " << ultimoCoincidencia;

    } else{
        cout << "no encontro tilin xd";
    }

    return 0;
}