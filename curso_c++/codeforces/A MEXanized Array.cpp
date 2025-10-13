#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t; cin >> t;

    vector <int> arrResult(t);
    for(int i = 0; i < t; ++i){
        int n,k,x; cin >> n >> k >> x;

        // si el maximo posicion permitido el arreglo es menor que el minimo aceptado del arreglo, no se puede resolver este prueba
        if(min(n,x+1) < k){
            arrResult[i] = -1;
            continue;
        }
        

        if( x == k){
            x -= 1;
        }
        int temp = 0;
        for(int j = 0; j < k ; ++j){
            if( j <= x){
                temp += j;
            }
                
        }

        arrResult[i] = temp + x * (n - k);
        
    }

    for(auto& n : arrResult){
        cout << n << endl;
    }

    return 0;
}