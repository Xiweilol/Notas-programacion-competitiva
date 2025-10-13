#include <iostream>
#include <set>

using namespace std;

int main(){
    set<int> numeros;

    //insertar elementows
    numeros.insert(5);
    numeros.insert(2);
    numeros.insert(8);
    numeros.insert(5); //duplicados no se implementa

    cout << "Elementos en el set: ";

    for (int x : numeros) {
        cout << x << " "; 
    }

    cout << endl;

    //buscar un elemento

    if(numeros.find(5) != numeros.end()){
        cout << "El 5 esta en el set" << endl;
    }

    //Eliminar
    numeros.erase(2);

    cout << "Elmentos despues de borrar 2: ";

    for(auto it = numeros.begin(); it != numeros.end(); ++it) {
        cout << *it << " ";
    }

    cout << endl;

    return 0;
}