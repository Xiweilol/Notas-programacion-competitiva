// Autor: Mintwi
// Fecha: 2026-01-19

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        vector <int> a(n),b(n);
        
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }

        int m; cin >> m;
        
        vector <int> d(m);

        for(int i = 0; i < m; i++){
            cin >> d[i];
        }

        int last = d.back();

        bool exist = false;
        //el ultimo debe de aparecer en el arreglo de valor 
        for(int i = 0; i < n; i++){
            if(b[i] == last){
                exist = true;
                break;
            }
        }

        if(!exist){
            cout << "NO\n";
            continue;
        }

        map <int,int> need;
        // contar las que no son iguales a[i] y b[i]
        for(int i = 0; i < n; i++){
            if(a[i] != b[i]){
                need[b[i]]++;
            }
        }

        // contar lo que tenemos del arreglo d
        map <int,int> have;

        for(int x : d){
            have[x]++;
        }

        //checar si con lo que tengo en el arreglo d, basta cubrir con los que necesito en b
        bool ok = true;
        for(auto& [k,v] : need){
            if(have[k] < v){
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}