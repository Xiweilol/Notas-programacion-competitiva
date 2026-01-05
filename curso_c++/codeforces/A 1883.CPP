// Autor: Mintwi
// Fecha: 2026-01-05

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        string s; cin >> s;

        int a = s[0] -'0';
        int b = s[1] -'0';
        int c = s[2] -'0';
        int d = s[3] -'0';

        cout << abs(a-1) + abs(b-a) + abs(c-b) + abs(d-c) << "\n";
    }

    return 0;
}