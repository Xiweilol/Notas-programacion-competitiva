// Autor: Mintwi
// Fecha: 2025-10-18

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        vector <long long> arr(n);

        for(int i = 0; i < n; i++) cin >> arr[i];

        sort(arr.begin(),arr.end());

        //indice de control para el rojo
        int l = 1;
        //hacemos un prefix sum para obtener valores del b de manera eficiente
        vector <long long> prefix(n);

        prefix[0] = arr[0];

        for(int i = 1; i < n;i++){
            prefix[i] = prefix[i-1] + arr[i];
        }

        //siempre es el ultimo para el rojo
        long long sumR = arr[n-1];

        bool ok = false;
        //recorrer todo el arreglo para el azul, el b es para azul
        for(int b = 1; b < n; b++){
            //siempre empieza en el posicion 1, uno mas que el de rojo, 
            //para el caso de count
            long long sumB = prefix[b-1];

            //mientra el indice del rojo sea menor que el de azul y que la suma sea menor
            while(l < b && sumR <= sumB){
                // sumar el rojo por final del arreglo
                sumR += arr[n-l-1];
                l++;
            }

            if(sumR > sumB && l < b){
                ok = true;
                break;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}