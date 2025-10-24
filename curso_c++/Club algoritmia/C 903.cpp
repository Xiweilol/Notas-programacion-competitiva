// Autor: Mintwi
// Fecha: 2025-10-24

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    unordered_map <int,int> freq;
    int ans = 0;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        freq[a]++;

        ans = max(ans,freq[a]);
    }

    cout << ans << "\n";

    return 0;
}