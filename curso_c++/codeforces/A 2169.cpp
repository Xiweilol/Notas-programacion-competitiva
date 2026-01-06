// Autor: Mintwi
// Fecha: 2026-01-06

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n,a; cin >> n >> a;

        int mayor = 0; 

        int menor = 0;

        for(int i = 0; i < n; i++){
            int v; cin >> v;

            if(v > a){
                mayor++;
            } else if(v < a){
                menor++;
            }
        }

        if(mayor > menor){
            cout << a+1 << "\n";
        } else {
            cout << a-1 << "\n";
        } 


    }

    return 0;
}