#include <iostream>
using namespace std;

int main(){
    /*los punteros solamente funciona para almacenar una sola lugar para los arrays,
    osea que cuando asignamos elementos a ppunteros, solo se asigna un elemento
    para encontrar los demas valores necesitamos poner la variable + 1*/

    float arr[3];

    float* ptr;

    cout << "Mostrando direccion usando arrays" << endl;
    for (int i = 0; i < 3; i++){
        cout << "&arr[" << i << "] = " << &arr[i] << endl;
    }

    ptr = arr;

    cout << "\n Mostrando direccion usando punteros: " << endl;

    for (int i = 0;i < 3; i++){
        cout << "ptr + " << i << " = " << ptr + i << endl;
    }
    return 0;
}