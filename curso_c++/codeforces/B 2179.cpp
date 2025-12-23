// Autor: Mintwi
// Fecha: 2025-12-23

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        vector <ll> a(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        int maximo = *max_element(a.begin(),a.end());

        a.erase(remove(a.begin(),a.end(),maximo),a.end());

        ll sum = 0;

        int sizes = a.size();
        for(int i = 0; i < sizes-1; i++){
            sum += abs(a[i] - a[i+1]);
        }

        cout << sum << "\n";
    }

    return 0;
}