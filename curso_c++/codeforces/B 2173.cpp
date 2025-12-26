// Autor: Mintwi
// Fecha: 2025-12-26

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
        vector <ll> b(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        for(int i = 0; i < n; i++){
            cin >> b[i];
        }

        ll curr_max = 0,curr_min = 0;

        for(int i = 0; i < n; i++){
            //encontrar la nueva maxima utilizando una minima del anterior
            ll new_max = max(curr_max - a[i],b[i]-curr_min);

            // encontrar la nueva minima usando la maxima anterior
            ll new_min = min(curr_min - a[i],b[i]-curr_max);

            curr_max = new_max;
            curr_min = new_min;

        }

        cout << curr_max << "\n";
    }

    return 0;
}