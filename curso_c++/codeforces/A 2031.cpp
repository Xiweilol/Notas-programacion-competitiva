// Autor: Mintwi
// Fecha: 2025-12-10

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        vector <int> a(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        
        int maximo = 0;
        //buscar los que podemos dedar sin cambio
        for(int i = 0; i < n; i++){
            int cnt = 0;
            for(int j = 0; j < n; j++){
                if(a[i] == a[j]) cnt++;
            }
            maximo = max(maximo,cnt);
        }


        cout << n - maximo << "\n";
    }

    return 0;
}