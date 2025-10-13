#include <iostream>
#include <string>
using namespace std;

struct Person{
    string nombre;
    string apellido;
    int age;
    float salary;
};
// crear una funcion que le pasa como parametro una estructura

void display_data(const Person&);
// una funcion que retorna una estructura
Person get_data();

int main(){
    //inicializar las variables de la persona
    Person p {"John","Doe",22,145000};

    display_data(p);

    return 0;
}

Person get_data(){
    Person p;

    string nombre;
    string apellido;
    int age;
    float salary;

    cout << "Enter first name: ";
    cin >> nombre;
    cout << "Enter last name: ";
    cin >> apellido;
    cout << "Enter age: ";
    cin >> age;

    cout << "Enter salary: ";
    cin >> salary;

    return Person{nombre,apellido,age,salary};
}
void display_data(const Person& p){
    cout << "nombre: " << p.nombre << endl;
    cout << "apellido: " << p.apellido << endl;
    cout << "Age: " << p.age << endl;
    cout << "Salary: " << p.salary << endl;
}