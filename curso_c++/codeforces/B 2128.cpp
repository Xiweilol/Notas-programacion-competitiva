// Autor: Mintwi
// Fecha: 2026-02-02

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        vector <int> p(n);

        for(int i = 0; i < n; i++){
            cin >> p[i];
        }

        int l = 0, r = n-1;

        for(int i = 1; i <= n; i++){
            bool izq;

            if(i & 1){
                izq = p[l] < p[r];
            } else{
                izq = p[l] > p[r];
            }

            if(izq){
                cout << 'L';
                l++;
            } else {
                cout << 'R';
                r--;
            }
        }

        cout << "\n";
    }

    return 0;
}