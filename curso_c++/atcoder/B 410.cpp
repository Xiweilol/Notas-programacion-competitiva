#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,q; cin >> n >> q;
    //inicializo el arreglo con n+1, con todos 0
    vector <int> arr(n+1,0);
    for(int i = 0; i < q; i++ ){
        if(i){cout << " ";}

        int x; cin >> x;

        if(x >= 1){
            //registra numero de bolas que hay en la box
            arr[x]++;
            //imprime simplemente el numero de bolas,
            cout << x;
        }
        else {
            //posicion 1
            int y = 1;
            //empieza a iterar desde la posicion 2
            for(int j = 2; j <= n; j++){
                //si numero que tiene de bolas en y es mayor que en la de j, re asigna el valor de y  j para el menor
                if(arr[y] > arr[j]){y=j;}
            }
            //registra numero de bolas una vez terminando iterar
            arr[y]++;
            //imprime en que caja quedo
            cout << y;
        }
    }

    cout << "\n";

    return 0;
}