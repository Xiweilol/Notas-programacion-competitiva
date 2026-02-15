// Autor: Mintwi
// Fecha: 2026-02-15
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        bool ok = false;

        for(int i = 0; i < n; i++){
            int ai; cin >> ai;

            if(ai == 67){
                ok = true;
            }
        }

        cout << (ok ? "YES" : "NO") << "\n";
    }

    return 0;
}