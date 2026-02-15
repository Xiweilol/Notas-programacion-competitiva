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

        vector <int> a(n+1);

        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }

        int range = (n+1) / 2;
        bool ok = true;
        //buscar uno por uno
        for(int i = 1; i <= n; i++){
            vector <int> real;
            vector <int> act;
            if(i & 1){
                for(int j = i; j <= n; j*=2){
                    real.push_back(a[j]);
                    act.push_back(j);
                }

                sort(real.begin(),real.end());

                for(int x = 0; x < real.size(); x++){
                    if(real[x] != act[x]){
                        ok = false;
                        break;
                    }
                }

                if(!ok) break;

            }
        }

        cout << (ok ? "YES" : "NO") << "\n";


    }

    return 0;
}