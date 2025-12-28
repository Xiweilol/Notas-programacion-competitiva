// Autor: Mintwi
// Fecha: 2025-12-28

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    vector <ll> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    if(n == 1){
        cout << 1 << "\n";
        return 0;
    }
    int acum = 1;
    int all_max = INT_MIN;
    int curr_acu = 1;
    for(int i = 1; i < n; i++){
        if(a[i] >= a[i-1]){
            curr_acu++;
        } else{
            curr_acu = 1;
        }

        all_max = max(all_max,curr_acu);
        
    }

    

    cout << all_max << "\n";
    return 0;
}