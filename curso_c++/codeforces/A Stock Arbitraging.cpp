//VERSION MEJORADA
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n,m,r; cin >> n >> m >> r;

    int baratoCompra, ventaCaro;

    cin >> baratoCompra;
    for(int i = 1; i < n; ++i){
        int temp; cin >> temp;
        baratoCompra = min(baratoCompra,temp);
    }

    cin >> ventaCaro;
    for(int i = 1; i<m; ++i){
        int temp; cin >> temp;
        ventaCaro = max(ventaCaro,temp);
    }

    if(baratoCompra >= ventaCaro){
        cout << r;
        return 0;
    }

    int accion = r / baratoCompra;
    //el modulo devuelve residuo de una division
    int result = accion * ventaCaro + (r % baratoCompra);

    cout << result;
    return 0;
}


//VERSION VIEJA
// #include <iostream>

// using namespace std;

// int main(){
//     int n,m,r; cin >> n >> m >> r;

//     //debe de inicializar el barato, porque si todos son positivos, ninguno son menor que 0;
//     int baratoCompra = 1001;
//     int caroVenta = 0;
//     for(int i = 0; i < n; ++i){
//         int temp; cin >> temp;
//         if(temp < baratoCompra){
//             baratoCompra = temp;
//         }
//     }

//     for(int i = 0; i < m; ++i){
//         int temp; cin >> temp;
//         if(temp > caroVenta){
//             caroVenta = temp;
//         }
//     }

//     int temporalr = r;
//     int accion = 0;
//     while(temporalr >= baratoCompra){
//         temporalr -= baratoCompra;
//         accion ++;
//     }

//     int result = accion * caroVenta + temporalr;

//     if(result > r){
//         cout << result;
//     } else {
//         cout << r;
//     }

//     return 0;
// }

