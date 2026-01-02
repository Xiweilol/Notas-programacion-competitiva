// Autor: Mintwi
// Fecha: 2026-01-02

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
        map <int,int> freq;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            freq[a[i]]++;
        }

        bool ok = false;
        for(int i = 0; i < n; i++){
            if(freq[a[i]] & 1){
                ok = true;
                break;
            }
        }

        if(ok){
            cout << "YES\n";
        } else{
            cout << "NO\n";
        }


    }

    return 0;
}