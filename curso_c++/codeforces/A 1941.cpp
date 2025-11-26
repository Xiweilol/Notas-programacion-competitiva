// Autor: Mintwi
// Fecha: 2025-11-25

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n,m,k; cin >> n >> m >> k;

        vector <int> b(n);
        vector <int> c(m);

        int cntA = 0;
        int cntB = 0;
        for(int i = 0; i < n; i++){
            cin >> b[i];
            if(b[i] < k){
                cntA++;
            }
        }

        for(int i = 0; i < m; i++){
            cin >> c[i];
            if(c[i] < k){
                cntB++;
            }
        }

        cout << cntA * cntB << "\n";
        
    }

    return 0;
}