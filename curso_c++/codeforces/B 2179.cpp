// Autor: Mintwi
// Fecha: 2025-12-23

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        vector <ll> a(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        ll sum = 0;
        for(int i = 1; i < n; i++){
            sum += abs(a[i] - a[i-1]);
        }

        ll ans = INT_MAX;


        //suponiendo que quitamos un elemento del principio y del final
        //ahora le asignamos eso al resultao, a ver quien es menor
        ans = min(sum - abs(a[1] - a[0]), sum - abs(a[n-1] - a[n-2]));

        //iteramos desde la posicion 1 hasta n-2, son los de la mitad
        for(int i = 1; i + 1 < n; i++){
            ans = min(ans,(sum - abs(a[i] - a[i-1]) - abs(a[i+1] - a[i]) + abs(a[i-1] - a[i+1])));
        }

        cout << ans << "\n";
    }

    return 0;
}