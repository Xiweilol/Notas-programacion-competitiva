// Autor: Mintwi
// Fecha: 2026-06-01
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
        int n; cin >> n;

        string s; cin >> s;

        vector <bool> vis(n);

        int pos = 0;
        vis[pos] = true;

        
        for(int i = 1; i < n; i++){
            
            if(s[pos] == 'R'){
                pos++;
            } else{
                pos--;
            }
            vis[pos] = true;
        }

        int ans = 0;

        for(bool num : vis){
            if(num) ans++;
        }

        cout << ans << "\n";
    }

    return 0;
}