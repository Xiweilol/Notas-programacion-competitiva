#include <iostream>
using namespace std;

int main(){
    // punteros digamos que apunta hacia direccion donde almacena la variable
    //utilizan & para los variables

    int var1 = 3;
    int var2 = 24;
    int var3 = 17;

    cout << "Direccion de var1: " << &var1 << endl;
    cout << "Direccion de var2: " << &var2 << endl;
    cout << "Direccion de var3: " << &var3 << endl;
}
