#include <iostream>
#include <string>

using namespace std;

struct Empleado{

    string nombre;
    int edad;
    float salario;

};
//funcion prototipo
void modificadorSalarial(Empleado*);

int main(){
    Empleado emp;

    cout << "Ingresa el nombre: " << endl;
    cin >> emp.nombre;

    cout << "Ingresa la edad: " << endl;
    cin >> emp.edad;

    cout << "Ingresa el salario: " << endl;
    cin >> emp.salario;

    modificadorSalarial(&emp);

    cout << "\nDisplay actualizado: " << endl;
    cout << "nombre: " << emp.nombre << endl;
    cout << "edad: " << emp.edad << endl;
    cout << "salario: " << emp.salario << endl;
    return 0;


}


void modificadorSalarial(Empleado* emp){
    emp->salario *= 1.10;
}