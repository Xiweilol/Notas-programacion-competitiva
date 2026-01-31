// Autor: Mintwi
// Fecha: 2026-01-30

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n,m; cin >> n >> m;

        string x; cin >> x;
        string s; cin >> s;

        int cnt = -1;

        for(int i = 0; i < 10; i++){
            if(x.find(s) != string::npos){
                cnt = i;
                break;
            }

            x += x;

        }

        cout << cnt << "\n";
        

    }

    return 0;
}