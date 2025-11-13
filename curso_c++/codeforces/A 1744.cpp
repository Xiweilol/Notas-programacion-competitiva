// Autor: Mintwi
// Fecha: 2025-11-12

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        map <int,char> M;

        int n; cin >> n;

        vector <int> arr(n);

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        string s; cin >> s;

        bool pas = true;
        for(int i = 0; i < n; i++){
            if(M.count(arr[i]) && M[arr[i]] != s[i]){
                pas = false;
                break;
            }
            M[arr[i]] = s[i];
        }

        if(pas){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}