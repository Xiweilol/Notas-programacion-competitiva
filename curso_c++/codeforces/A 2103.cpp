// Autor: Mintwi
// Fecha: 2025-12-30

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        set <int> S;

        for(int i = 0; i < n; i++){
            int a; cin >> a;

            S.insert(a);
        }

        cout << S.size() << "\n";

        
    }

    return 0;
}