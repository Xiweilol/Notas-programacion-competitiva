// Autor: Mintwi
// Fecha: 2025-12-25

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        vector <int> a(n);
        map <int,int> freq;
        for(int i = 0; i < n; i++){
            cin >> a[i];

            freq[a[i]]++;
        }

        int ans = 0;
        
        
        while(freq[-1] > freq[1]){
            freq[-1]--;
            freq[1]++;
            ans++;

        }

        if(freq[-1] & 1){
            ans++;
        }

        cout << ans << "\n";

    }

    return 0;
}