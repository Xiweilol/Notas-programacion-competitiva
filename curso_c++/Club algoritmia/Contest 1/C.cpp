// Autor: Mintwi
// Fecha: 2026-03-17
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll mod = 1000000000 + 7;
int signo(int n){
    return (n < 0 ? -1 : 1);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        vector <int> a(n);

        for(int i = 0; i < n; i++) cin >> a[i];

        int i = 0,j = 0;

        
        ll ans = 0;
        while(i < n){
            int mx = a[i];
            j = i;
            while(j + 1 < n && signo(a[i]) == signo(a[j+1])){
                j++;
                mx = max(mx,a[j]);
            }
            ans += mx;
            i = j + 1;
        }

        cout << ans << "\n";
    
    }

    return 0;
}