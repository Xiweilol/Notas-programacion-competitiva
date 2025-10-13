#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k; cin >> n >> k;

    vector <int> a(n);
    vector <int> t(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    } 
    
    for(int i = 0; i < n; i++){
        cin >> t[i];
    }
    
    //sumar quien tenga base 1
    long long suma = 0;
    for(int i = 0; i < n; i++){
        if(t[i] == 1){
            suma += a[i];
            //una vez sumado, le pone en 0, para no sumar otra vez
            a[i] = 0;
        }
    }
    long long maximo = 0;
    //sacar el maximo ventana deslizante
    for(int i = 0; i < k; i++){
        maximo += a[i];
    }

    long long best = maximo;
    for(int i = k; i < n; i++){
        maximo += a[i] -  a[i - k];
        if(maximo > best){
            best = maximo;
        }
    }

    cout << best + suma << "\n";

    return 0;
}