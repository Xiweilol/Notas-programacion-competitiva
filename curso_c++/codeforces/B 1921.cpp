// Autor: Mintwi
// Fecha: 2026-01-31

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        string s; cin >> s;

        string f; cin >> f;

        int add = 0;
        int remove = 0;

        for(int i = 0; i < n; i++){
            if(s[i] > f[i]){
                remove++;
            } else if(s[i] < f[i]){
                add++;
            }
        }

        cout << max(add,remove) << "\n";

    }

    return 0;
}