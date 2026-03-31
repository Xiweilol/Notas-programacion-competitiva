// Autor: Mintwi
// Fecha: 2026-03-31
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

        vector <int> a(n);

        map <int,int> freq;
        for(int i = 0; i < n; i++){
            cin >> a[i];

            freq[a[i]]++;
        }

        //cout << "Tamaño: " << freq.size() << "\n";
        if(freq.size() >= 3){
            cout << "NO\n";
            continue;
        } else if(freq.size() == 1 || (n == 3 && freq.size() == 2)){
            cout << "YES\n";
            continue;
        }

        int mitad = (n+1) / 2;

        bool ok = true;
        for(auto [k,v] : freq){
            if(v > mitad){
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << "\n";


    }

    return 0;
}