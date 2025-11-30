// Autor: Mintwi
// Fecha: 2025-11-30

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n,m; cin >> n >> m;

        int x,y; cin >> x >> y;

        int cntx = 0,cnty = 0;
        for(int i = 1; i < n;i++){
            int x,y; cin >> x >> y;

            cntx += x;
            cnty += y;
        }


        int ans = m + cntx + cnty;

        cout << 2 *(m + ans) << "\n";
    }

    return 0;
}