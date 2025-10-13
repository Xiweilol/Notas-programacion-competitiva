#include <iostream>
#include <queue>

using namespace std;

int main(){

    // cila es primero en entrar, primero en salir
    queue <string> clientes;

    clientes.push("Ana");
    clientes.push("Luis");
    clientes.push("Maria");

    cout << "Primero en la cola: " << clientes.front() << endl;
    cout << "Ultimo en la cola: " << clientes.back() << endl;
    cout << "Tanaño: " << clientes.size() << endl;

    clientes.pop();
    cout << "Nuevo frente: " << clientes.front() << endl;

    while (!clientes.empty()){
        cout << "Atendiendo a : " << clientes.front() << endl;
        clientes.pop();
    }

    return 0;
}