// Autor: Mintwi
// Fecha: 2026-01-07

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

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        //int cnt = count(a.begin(),a.end(),1);

        if((a[0] == 1 || a[n-1] == 1)){
            cout << "Alice\n";
        } else {
            cout << "Bob\n";
        }
    }

    return 0;
}