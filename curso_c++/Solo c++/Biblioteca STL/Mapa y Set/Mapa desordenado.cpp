#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    //Mapa no ordenado, es mas rapido, ejecuta en O(1);
    unordered_map<string, int> inventario;

    // Insertar elementos
    inventario["Manzanas"] = 10;
    inventario["Peras"] = 5;
    inventario.emplace("Naranjas", 8);

    // Acceso
    cout << "Hay " << inventario.at("Manzanas") << " manzanas" << endl;

    // Búsqueda
    if (inventario.count("Peras")) {
        cout << "Si hay peras en el inventario" << endl;
    }

    // Iterar
    cout << "Inventario completo:" << endl;
    for (auto& item : inventario) {
        cout << item.first << ": " << item.second << endl;
    }

    // Borrar
    inventario.erase("Peras");
    cout << "Tras borrar peras, quedan " << inventario.size() << " productos." << endl;

    return 0;
}
