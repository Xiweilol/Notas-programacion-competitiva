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
        string a; cin >> a;

        reverse(a.begin(),a.end());
        //cout << a << "\n";
        for(int i = 0; i < a.size();i++){
            if(a[i] == 'p'){
                a[i] = 'q';
            } else if(a[i] == 'q'){
                a[i] = 'p';
            }
        }

        cout << a << "\n";
    }

    return 0;
}