// Autor: Mintwi
// Fecha: 2026-01-17

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
        map <int,int> freqcuencia;

        for(int i = 0; i < n; i++){
            cin >> a[i];

            freqcuencia[a[i]]++;
        }

        vector <int> cont;

        for(auto [k,v] : freqcuencia){
            if(v >= 2){
                cont.push_back(k);
            }
            if(cont.size() == 2) break;

        }

        if(cont.size() < 2){
            cout << -1 << "\n";
            continue;
        }
        vector <int> ans(n,1);

        bool dos = false;
        bool tres = false;
        for(int i = 0; i < n; i++){
            if(a[i] == cont[0] && !dos){
                ans[i] = 2;
                dos = true;
            } else if(a[i] == cont[1] && !tres){
                ans[i] = 3;
                tres = true;
            }
            cout << ans[i] << " ";
        }

        cout << "\n";
    }

    return 0;
}