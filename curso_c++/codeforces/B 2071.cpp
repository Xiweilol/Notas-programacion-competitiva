// Autor: Mintwi
// Fecha: 2025-11-14

#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool cuadradoPerfecto(int64_t num){
    int64_t lol = 1ll* (num*(num+1)) / 2;

    int64_t cuadrado = pow(lol,0.5);

    if(cuadrado * cuadrado == lol){
        return true;
    }
    return false;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int64_t n; cin >> n;

        if(cuadradoPerfecto(n)){
            cout << "-1\n";
            continue;
        }

        vector <int64_t> arr(n+1);

        for(int i = 1; i <= n; i++){
            arr[i] = i;
        }


        //variable donde guarda los cuadrados
        int64_t j = 0;
        for(int64_t i = 1; i <= n; i++){
            //aumentamos la j hasta un cantidad mas alto que la suma actual
            while((int64_t)j*j < (int64_t)(i *(i+1)) / 2){
                j++;
            }
            if((int64_t)j*j == (int64_t)(i *(i+1)) / 2){
                swap(arr[i],arr[i+1]);
            }

            cout << arr[i] << " ";
        }

        cout << "\n";

    }

    return 0;
}