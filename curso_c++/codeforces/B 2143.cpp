// Autor: Mintwi
// Fecha: 2025-11-11

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;

        vector <ll> a(n);

        vector <ll> b(k);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        for(int i = 0; i < k; i++){
            cin >> b[i];
        }

        sort(a.begin(),a.end());

        sort(b.begin(),b.end());

        ll sum = 0;
        for(int i = 0; i < n; i++){
            sum += a[i];
        }
        ll position = n;

        for(int i = 0; i < k; i++){
            position -= b[i];

            if(position >= 0){
                sum -= a[position];
            }
        }

        cout << sum << "\n";
    }

    return 0;
}