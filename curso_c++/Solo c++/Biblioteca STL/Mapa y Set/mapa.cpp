#include <iostream>
#include <map>
#include <string>

using namespace std;


int main(){
    //contenedor asociativo, clave es unico, no repiten

    //mapa, llave es de string valor de int
    map <string, int> edades;

    //insertar elemento
    edades.insert({"Juan",20});
    edades["Maria"] = 25;
    edades.emplace("Luis",30);

    cout << "Mapa inicial:\n";
    for (auto& par : edades){
        cout << par.first << " -> " << par.second << endl;
    }


    // acceder y modificar valores
    cout << "Edad de Maria (con []): " << edades["Maria"] << endl;
    cout << "Edad de Juan (con at): " << edades.at("Juan") << endl;
    
    //modificar un valor existente
    edades["Maria"] = 26;
    cout << "Maria ahora tiene " << edades["Maria"] << "años.\n\n";


    //buscar un elemento
    auto it = edades.find("Luis");
    if(it != edades.end()){
        cout << "Encontrado: " << it->first << " -> " << it->second << endl;
    } else {
        cout << "Luis no encontrado\n";
    }

        // -------------------
    // 4. Verificar existencia con count
    // -------------------
    if (edades.count("Ana"))
        cout << "Ana existe en el mapa.\n";
    else
        cout << "Ana NO existe en el mapa.\n";
    cout << endl;

    // -------------------
    // 5. Recorrido con iteradores
    // -------------------
    cout << "Recorriendo con iteradores:\n";
    for (auto it = edades.begin(); it != edades.end(); ++it) {
        cout << it->first << " -> " << it->second << endl;
    }
    cout << endl;

    // -------------------
    // 6. Tamaño y vacío
    // -------------------
    cout << "El mapa tiene " << edades.size() << " elementos.\n";
    cout << (edades.empty() ? "Está vacío" : "No está vacío") << endl << endl;

    // -------------------
    // 7. lower_bound y upper_bound
    // -------------------
    cout << "lower_bound(\"Luis\"): " << edades.lower_bound("Luis")->first << endl;
    auto up = edades.upper_bound("Luis");
    if (up != edades.end())
        cout << "upper_bound(\"Luis\"): " << up->first << endl;
    else
        cout << "No hay upper_bound para \"Luis\" (es el último elemento)\n";
    cout << endl;

    // -------------------
    // 8. Eliminar elementos
    // -------------------
    cout << "Eliminando a Juan...\n";
    edades.erase("Juan");

    cout << "Mapa después de borrar a Juan:\n";
    for (auto& par : edades)
        cout << par.first << " -> " << par.second << endl;
    cout << endl;

    // -------------------
    // 9. Limpiar todo
    // -------------------
    cout << "Limpiando el mapa...\n";
    edades.clear();

    cout << "Tamaño después de clear(): " << edades.size() << endl;
    cout << (edades.empty() ? "El mapa está vacío." : "El mapa aún tiene elementos.") << endl;

    return 0;
}