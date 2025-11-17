// Autor: Mintwi
// Fecha: 2025-11-17

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n,x; cin >> n >> x;

        vector <ll> a(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        sort(a.rbegin(),a.rend());

        vector <ll> temp;
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(a[i] >= x){
                ans++;
            } else {
                temp.push_back(a[i]);
                int ta = temp.size();
                if(temp[ta-1] * ta >= x){
                    ans++;
                    temp.clear();
                }
            }

        }

        cout << ans << "\n";
    }

    return 0;
}