#include <iostream>
using namespace std;

int main() {
    // Leemos S y T
    string s, t; 
    cin >> s >> t;

    // Probamos todos los anchos posibles: 1 <= w < |S|
    //w se especifica como separar los columnas, c es fila, i se usa para recorrerlo c+w, c+2w
    for (int w = 1; w < (int)s.size(); ++w) {

        // Para cada w, probamos todas las columnas posibles.
        // OJO: aquí c es 0-indexado (columna real = c+1).
        for (int c = 0; c < w; ++c) {

            // 'now' será la lectura vertical de la columna c con salto w
            string now = "";

            // Recorremos S tomando los índices: c, c+w, c+2w, ...
            for (int i = c; i < (int)s.size(); i += w) {
                now += s[i];
            }

            // Si la lectura vertical coincide EXACTAMENTE con T, ganamos.
            if (now == t) {
                cout << "Yes" << endl;
                return 0;              // salimos porque ya encontramos un (c, w) válido
            }
        }
    }

    // Si terminamos todos los intentos sin match, no existe tal par (c, w)
    cout << "No" << endl;
}
