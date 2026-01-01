// Autor: Mintwi
// Fecha: 2026-01-01

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;

        vector <int> shel(k+1,0);
        for(int i = 1; i <= k; i++){
            int b,c; cin >> b >> c;
            
            shel[b] += c; 
        }

        sort(shel.rbegin(),shel.rend());

        int sum = 0;

        int len = min(n,k);

        for(int i = 0; i < len; i++){
            sum += shel[i];
        }

        cout << sum << "\n";


    }

    return 0;
}