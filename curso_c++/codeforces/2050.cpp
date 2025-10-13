#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n,m; cin >> n >> m;
        vector <int> contenedor;
        for(int i = 0; i < n; i++){
            string s; cin >> s;
            contenedor.push_back(s.length());
        }

        int cantidad = 0;
        int ans = 0;
        for(auto& i : contenedor){
            if(cantidad + i > m){
                break;
            }

            cantidad += i;
            ans++;
        
        }

        cout << ans << "\n";
    }
}