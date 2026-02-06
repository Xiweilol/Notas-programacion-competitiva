// Fecha: 2026-02-05

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        vector <int> p(n);

        for(int i = 0; i < n; i++){
            cin >> p[i];
        }

        int mn = INT_MAX, mnWin = INT_MAX;

        int ans = 0;
        for(int i = 0; i < n; i++){
            if(mn < p[i] && mnWin > p[i]){
                ans++;
                mnWin = p[i];
            }

            mn = min(mn,p[i]);
        }

        cout << ans << "\n";

    }

    return 0;
}