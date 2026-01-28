// Autor: Mintwi
// Fecha: 2026-01-28

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int x,y; cin >> x >> y;

        int cnt = 0;
        int rest = 0;
    
        cnt = (y+1) / 2;

        if(y % 2 == 0){
            rest = 7 * cnt;
        } else{
            rest = 7 * cnt + 4;
        }

        while(rest < x){
            rest += 15;
            cnt++;
        }

        cout << cnt << "\n";
    }

    return 0;
}