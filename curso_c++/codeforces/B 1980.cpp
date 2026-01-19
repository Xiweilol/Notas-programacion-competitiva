// Autor: Mintwi
// Fecha: 2026-01-18

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n,f,k; cin >> n >> f >> k;

        vector <int> a(n);

        int num = 0;
        f--;
        for(int i = 0; i < n; i++){
            cin >> a[i];

            if(f == i){
                num = a[i];
            }
        }
        //cout << num << "\n";
        sort(a.rbegin(),a.rend());

        bool exist = false;
        int idx = 0;
        for(int i = 0; i < n; i++){
            if(a[i] == num ){
                idx = i;
                if(i < k){
                    //cout << "indice: " << i << "\n";
                    exist = true;
                }
            }
        }

        if(idx >= k && exist){
            cout << "MAYBE\n";
        } else if(idx >= k){
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }

    return 0;
}