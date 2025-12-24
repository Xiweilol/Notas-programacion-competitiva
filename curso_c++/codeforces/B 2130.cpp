// Autor: Mintwi
// Fecha: 2025-12-24

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n,s; cin >> n >> s;

        vector <int> a(3);

        for(int i = 0; i < n; i++){
            int temp; cin >> temp;

            a[temp]++;
        }

        int sum = a[1] + 2 * a[2];

        //cuando son iguales o cuando sea mayor o igual que el caso base + 2
        //siempre puede lograrlo en algun rebote regresando las posiciones
        if(s == sum || s >= sum + 2){
            cout << -1 << "\n";
        //unico caso en que bob gana es cuando k == sum + 1
        // para lograrlo necesita hacer rebotes entre 0 y 1, pero el bob lo puede reordenar
        // 0...0...2...2....1....1
        } else{
            for(int i = 0; i < a[0]; i++){
                cout << 0 << " ";
            }
            for(int i = 0; i < a[2]; i++){
                cout << 2 << " ";
            }
            for(int i = 0; i < a[1]; i++){
                cout << 1 << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}