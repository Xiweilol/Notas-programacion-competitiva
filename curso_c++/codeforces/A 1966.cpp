// Autor: Mintwi
// Fecha: 2025-11-23

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        map <int,int> freq;

        int n,k; cin >> n >> k;

        for(int i = 0; i < n; i++){
            int c; cin >> c;

            freq[c]++;
        }

        bool pas = false;
        for(auto& par : freq){
            if(par.second >= k){
                pas = true;
                break;
            }
        }

        if(pas){
            cout << k - 1 << "\n";
        } else {
            cout << n << "\n";
        }
    }

    return 0;
}