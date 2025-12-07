// Autor: Mintwi
// Fecha: 2025-12-07

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        int y,r; cin >> y >> r;

        int div = n - r;

        y /= 2;
        int cnt = 0;
        if(div <= 0){
            cnt = r;
        } else {
            cnt = r;
            while(div > 0 && y > 0){
                div--;
                y--;
                cnt++;
            }
        }

        cout << cnt << "\n";
    }

    return 0;
}