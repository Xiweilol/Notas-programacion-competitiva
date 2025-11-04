// Autor: Mintwi
// Fecha: 2025-10-27

#include <bits/stdc++.h>
#define nl '\n'
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector <int> arr1(n+1);
        for(int i = 1; i <= n;i++){
            cin >> arr1[i];
        }

        int m; cin >> m;
        vector <int> arr2(m+1);

        for(int i = 1; i <= m;i++){
            cin >> arr2[i];
        }

        vector <int> prefn(n+1);
        vector <int> prefm(m+1);

        for(int i = 1; i <= n; i++){
            prefn[i] = prefn[i-1] + arr1[i];
        }

        for(int i = 1; i <= m; i++){
            prefm[i] = prefm[i-1] + arr2[i];
        }

        int ans = *max_element(prefn.begin(),prefn.end()) + *max_element(prefm.begin(),prefm.end());

        cout << ans << nl;
    }

    return 0;
}