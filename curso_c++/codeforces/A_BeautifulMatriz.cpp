#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<vector<int>> matrix;
    matrix.reserve(5);
    int fila_x;
    int columna_x;
    for (int i = 0; i < 5; ++i) {
        vector<int> fila;
        fila.reserve(5);
        for (int j = 0; j < 5; ++j) {
            int x; cin >> x;

            if(x == 1){
              fila_x = i;
              columna_x = j;
            }
            fila.push_back(x);     // ✅ sin acceso por índice
        }
        matrix.push_back(fila);
    }
    //chatgpt, distancia Manhattan,mide la distancia entre dos puntos, Distancia = |x2 - x1| + |y2 - y1|
    int contador = abs(fila_x - 2) + abs(columna_x - 2);
    //la que yo hice xd
      // do {
      //     if (fila_x < 2) {
      //         fila_x++;
      //         contador++;
      //         continue;
      //     } else if (fila_x > 2) {
      //         fila_x--;
      //         contador++;
      //         continue;
      //     }

      //     if (columna_x < 2) {
      //         columna_x++;
      //         contador++;
      //         continue;
      //     } else if (columna_x > 2) {
      //         columna_x--;
      //         contador++;
      //         continue;
      //     }

      // } while (fila_x != 2 || columna_x != 2);

      cout << contador;
    
    return 0;
}
