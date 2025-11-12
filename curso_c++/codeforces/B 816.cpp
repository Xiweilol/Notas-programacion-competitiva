// Autor: Mintwi
// Fecha: 2025-11-11

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k,q;
    cin >> n >> k >> q;

    vector <int> bandera(2000002,0);
    int limite = 2000000;
    for(int i = 1; i <= n; i++){
        int l,r; cin >> l >> r;
        bandera[l]++;
        bandera[r+1]--;
    }

    vector <int> prefix1(limite + 2,0);

    for(int i = 1; i <= limite; i++){
        prefix1[i] = prefix1[i-1] + bandera[i];
    }

    vector <int> admitible(limite + 2,0);

    for(int i = 1; i <= limite; i++){
        if(prefix1[i] >= k){
            admitible[i] = 1;
        }
    }

    vector <int> ans(limite + 2,0);

    for(int i = 1; i <= limite; i++){
        ans[i] = ans[i-1] + admitible[i];
    }

    while(q--){
        int a,b; cin >> a >> b;

        cout << ans[b] - ans[a-1] << "\n";
    }
    return 0;
}