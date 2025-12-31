// Autor: Mintwi
// Fecha: 2025-12-31

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        
        int len = 2 * n - 2;

        vector <string> ans;
        for(int i = 0; i < len; i++){
            string a; cin >> a;

            //lo que queremos buscar es el palindromo
            //por lotanto si el prefijo y sufijo debe ser de tamañao n-1
            if(a.size() >= n-1){
                ans.push_back(a);
            }
        }

        reverse(ans[1].begin(),ans[1].end());

        if(ans[0] == ans[1]){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }

    }

    return 0;
}