// Autor: Mintwi
// Fecha: 2025-12-28

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){

        int n,k; cin >> n >> k;

        vector <ll> a(k);

        for(int i = 0; i < k; i++){
            cin >> a[i];
        }

        ll sum = 0;

        sort(a.begin(),a.end());
        for(int i = 0; i < k-1; i++){
            if(a[i] == 1){
                sum++;
            } else{
                sum += 2 * a[i] - 1;
            }
        }

        cout << sum << "\n";

    }

    return 0;
}