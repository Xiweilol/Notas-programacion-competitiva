// Autor: Mintwi
// Fecha: 2026-04-19
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
        int n;  cin >> n;

        vector <int> a(n+1);

        int ans = 0;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
            if(a[i] - i <= 0){
                ans++;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}