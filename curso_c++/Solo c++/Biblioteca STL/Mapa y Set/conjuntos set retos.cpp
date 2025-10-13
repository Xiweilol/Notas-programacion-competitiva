#include <iostream>
#include <set>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    //RETO 1: INSERTAR Y MOSTRAR
        // set <int> unicos;
        // int n;
        // cout << "Ingrese 10 numeros por favor: ";
        
        // for (int i = 0; i < 10 ; i++){
        //     cin >> n;
        //     unicos.insert(n);
        // }

        // for (auto& s : unicos){
        //     cout << s << " ";
        // }
    //RETO 2: VERIFICAR EXISTENCIA
        // set <int> contenedor;
        // contenedor.insert(32);
        // contenedor.insert(44);
        // contenedor.insert(23);
        // contenedor.insert(1);
        // contenedor.insert(4);
        // contenedor.insert(6);

        // int n; cin >> n;

        // if (contenedor.count(n)){
        //     cout << "El numero X si esta en el set";
        // } else {
        //     cout << "El numero X no esta en el set";
        // }
    //RETO 3, INTERSECCION DE DOS CONJUNTOS
    set <int> conjunto1;
    set <int> conjunto2;

    cout << "Ingrese 5 numeros para el primer conjunto: " << endl;
    int n;

    for (int i = 0; i < 5 ; ++i){
        cin >> n;
        conjunto1.insert(n);
    }

    cout << "Ingrese 5 numeros para el segundo conjunto: " << endl;

    int n2;

    for (int i = 0; i < 5 ; ++i){
        cin >> n2;
        conjunto2.insert(n2);
    }

    int contador = 0;
    for(auto& n : conjunto1){
        if(conjunto2.count(n)){
            cout << n << " ";
            contador++;
        }
    }

    if (contador == 0){
        cout << "No hay elementos en comun";
    }
}
