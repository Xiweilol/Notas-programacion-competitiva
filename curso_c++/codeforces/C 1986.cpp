// Autor: Mintwi
// Fecha: 2026-01-16

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n,m; cin >> n >> m;

        string s; cin >> s;
        
        vector <int> ind(m);

        for(int i = 0; i < m; i++){
            cin >> ind[i];
            ind[i]--;
        }

        string c; cin >> c;

        sort(ind.begin(),ind.end());

        sort(c.begin(),c.end());

        //cout << c << "\n";
        set <int> S(ind.begin(),ind.end());
        int l = 0;
        for(int i = 0; i < m; i++){
            if(S.count(ind[i])){
                s[ind[i]] = c[l];
                l++;
                S.erase(ind[i]);
            }
        }

        cout << s << "\n";
    }

    return 0;
}