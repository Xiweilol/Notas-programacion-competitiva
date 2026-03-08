// Autor: Mintwi
// Fecha: 2026-03-08
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll mod = 1000000000 + 7;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector <int> a(n+1);
        set <int> freq;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
            freq.insert(a[i]);
        }

        if(freq.size() == 1){
            cout << "YES\n";
            continue;
        }
        bool act = false;
        
        bool ok = true;
        
        for(int i = 1; i <= n; i++){
            
            if(a[i] == 0 && act){
                ok = false;
                break;
            } else if(a[i] == 0){
                act = true;
            } else {
                act = false;
            }
        }

        cout << (ok ? "NO" : "YES") << "\n";


    }

    return 0;
}