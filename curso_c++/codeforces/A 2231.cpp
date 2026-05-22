// Autor: Mintwi
// Fecha: 2026-05-22
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

        int cnt = 1;
        for(int i = 0; i < n; i++){
            cout << cnt << " ";
            cnt += 2;
        } 

        cout << "\n";
    }

    return 0;
}