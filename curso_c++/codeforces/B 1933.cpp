// Autor: Mintwi
// Fecha: 2026-01-20

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        unordered_set <int> S;
        
        ll sum = 0;

        for(int i = 0; i < n; i++){
            ll a; cin >> a;
            sum+= a;
            S.insert(a);
        }

        if(sum % 3 == 0){
            cout << 0 << "\n";
        } else if(sum % 3 == 1){
            cout << 1 << "\n";
        } else{
            bool ok = false;
            for(auto i : S){
                if((sum - i) % 3 == 0){
                    ok = true;
                    break;
                }
            }

            if(ok){
                cout << 1 << "\n";
            } else{
                cout << 2 << "\n";
            }
        }




    }

    return 0;
}