#include <iostream>
using namespace std;

int main() {
    int x = 10;          // Habitación de x guarda "10"
    int* p = &x;         // p guarda el número de habitación de x

    cout << "x (huesped en la habitacion de x): " << x << "\n";
    cout << "&x (numero de habitacion de x): " << &x << "\n";

    cout << "p (papelito con el numero de habitacion de x): " << p << "\n";
    cout << "*p (entrar a esa habitacion y ver el huesped): " << *p << "\n";

    // Cambiar el huesped usando el puntero
    *p = 25;

    cout << "\nDespues de *p = 25:\n";
    cout << "x ahora vale: " << x << "\n";
    cout << "*p ahora vale: " << *p << "\n";

    return 0;
}
