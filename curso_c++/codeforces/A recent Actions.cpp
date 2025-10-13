#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    if(!(cin >> t)) return 0;
    while (t--) {                   // Repite para cada caso de prueba
        int n, m; 
        cin >> n >> m;              // n: tamaño del panel, m: número de acciones

        vector<int> ans(n + 1, -1); // ans[i]: momento en que cae el post i (1..n), -1 si nunca
        vector<char> seen(n + m + 5, 0); 
                                    // seen[x]: 1 si el post x (x ∈ [n+1, n+m]) ya apareció
                                    // tamaño n+m+5 por seguridad de índices
        int distinct = 0;           // cuántos posts "nuevos" distintos hemos visto hasta ahora

        for (int i = 1; i <= m; ++i) { // Recorre los m momentos (i = tiempo)
            int x; 
            cin >> x;                   // Lee el post que recibe acción en el momento i
            if (!seen[x]) {             // ¿Es la PRIMERA vez que aparece este número?
                seen[x] = 1;            // Márcalo como visto
                ++distinct;             // Aumenta el contador de distintos
                if (distinct <= n) {    // Mientras no hayamos tirado a todos los n posts iniciales
                    int post = n - distinct + 1; 
                                       // Observación clave: cuando el contador llega a k,
                                       // cae el post n - k + 1
                    if (ans[post] == -1) ans[post] = i; 
                                       // Registra el primer momento en que cayó ese post
                }
            }
        }

        for (int i = 1; i <= n; ++i) {  // Imprime las respuestas para posts 1..n
            if (i > 1) cout << ' ';     // Espacio entre números
            cout << ans[i];
        }
        cout << '\n';                   // Fin de línea por caso
    }
    return 0;                           // Fin del programa
}




//VERSION QUE INTENTE, FUNCIONA PERO EXCEDE EL TIEMPO
// #include <iostream>
// #include <deque>
// #include <map>
// #include <algorithm>
// using namespace std;

// int main(){
//     int t; cin >> t;

//     int momento = 0;
//     while (t--){
//         deque <int> d; map <int,int> salida;
//         int momento = 0;
//         int n,m; cin >> n >> m;
//         for(int i = 1; i <= n; ++i){
//             d.push_back(i);
//             salida[i] = -1;
//         }
//         while(m--){
//             int p; cin >> p;
//             bool esta = false;
//             for(int i = 0; i < n; ++i){
//                 if(p == d[i]){
//                     esta = true;
//                     swap(d[0],d[i]);
//                     break;
//                 }
//             }
//             if(!esta){
//                 d.push_front(p);
                
//                 if(n - d.back() >= 0){
//                     salida[d.back()] = momento +1;
//                 } 
//                 d.pop_back();
//             }

//             momento++;
//         }
//         for(auto it = salida.begin(); it != salida.end(); ++it){
//             cout  <<it -> second << " ";
//         }
//         cout << "\n";
//     }

//     return 0;
// }
