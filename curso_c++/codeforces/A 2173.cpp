// Autor: Mintwi
// Fecha: 2025-12-05

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;

        string s; cin >> s;

        int cnt = 0;
        int idx = -1000;
        for(int i = 0 ; i < n; i++){
            if(s[i] == '1'){
                idx = i;
            } else{
                if(i-idx > k){
                    cnt++;
                }
            }
        }

        cout << cnt << "\n";
    }

    return 0;
}