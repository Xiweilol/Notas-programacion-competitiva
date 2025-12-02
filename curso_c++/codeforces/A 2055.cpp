// Autor: Mintwi
// Fecha: 2025-12-02

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n,a,b; cin >> n >> a >>b;

        int dis = abs(a-b);
        dis--;
        if(dis % 2 == 0){
            cout << "NO\n";
        } else{
            cout << "YES\n";
        }
    }

    return 0;
}