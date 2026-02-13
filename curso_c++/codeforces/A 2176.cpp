// Autor: Mintwi
// Fecha: 2026-02-13
// Theory number hater :( 
#include <bits/stdc++.h>
typedef long long ll;
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

        vector <bool> visit(n);
        int ans = 0;
        for(int i = n-1; i >= 0; i--){
            for(int j = 0; j < i; j++){
                if(a[i] < a[j]){
                    ans++;
                    break;
                }
            }
        }

        cout << ans << "\n";
    }

    return 0;
}