// Autor: Mintwi
// Fecha: 2025-12-22

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        vector <string> arr(2);

        cin >> arr[0];
        cin >> arr[1];

        bool ok = true;

        for(int i = 0; i < n; i++){
            if(arr[0][i] == '1' && arr[1][i] == '1'){
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}