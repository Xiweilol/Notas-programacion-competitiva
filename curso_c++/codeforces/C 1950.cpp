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
        int h,m; char c;
        cin >> h >> c >> m;

        string temp = (h < 12 ? " AM" : " PM");

        h = (h % 12 ? h % 12 : 12);

        cout << (h < 10 ? "0" : "") << h << c << (m < 10 ? "0" : "") << m << temp << "\n";


    }

    return 0;
}