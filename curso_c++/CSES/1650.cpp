// Autor: Mintwi
// Fecha: 2025-10-20

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,q; cin >> n >> q;

    vector <long long> arr(n+1);

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    vector <long long> prefxor(n+1);

    for(int i = 1; i <= n; i++){
        prefxor[i] = prefxor[i-1] ^ arr[i];
    }

    while(q--){
        int a,b; cin >> a >> b;

        long long ans = prefxor[b] ^ prefxor[a-1];
        
        cout << ans << "\n"; 
    }

    return 0;
}