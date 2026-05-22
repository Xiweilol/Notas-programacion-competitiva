// Autor: Mintwi
// Fecha: 2026-05-21
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

        vector <int> p(n+1);

        int mx = -10;
        int idx = -1;
        for(int i = 1; i <= n; i++){
            cin >> p[i];

            if(p[i] > mx){
                mx = p[i];
                idx = i;
            }
        }

        swap(p[1],p[idx]);

        for(int i = 1; i <= n; i++){
            cout << p[i] << " ";
        }

        cout << "\n";
    }

    return 0;
}