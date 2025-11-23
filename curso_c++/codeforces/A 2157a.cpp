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
        int n; cin >> n;

        vector <int> a(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        map <int,int> freq;
        sort(a.begin(),a.end());
        int ans = 0;
        for(int& x : a){
            freq[x]++;

            if(freq[x] > x){
                ans++;
            }
        }

        for(auto it = freq.begin(); it != freq.end(); it++){
            if(it->first > it ->second){
                ans += it->second;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}