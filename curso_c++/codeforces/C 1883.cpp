// Autor: Mintwi
// Fecha: 2026-02-10

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;

        int mn = INT_MAX;
        vector <int> a(n);

        int cntEven = 0;
        bool pasfout = false;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] % 2 == 0){
                cntEven++;
            }
            if(a[i] % k == 0){
                pasfout = true;
            }
        }

        if(pasfout){
            cout << 0 << "\n";
            continue;
        }
        if(k == 4){
            if(n == 1){
                int cntdes = 0;
                while(a[0] % 4 != 0){
                    a[0]++;
                    cntdes++;
                } 
                cout << cntdes << "\n";
                continue;
            }

            if(cntEven >= 2){
               cout << 0 << "\n"; 
               continue;
            }

            if(cntEven == 1){
                cout << 1 << "\n";
            } else{
                bool ok = false;
                for(int i = 0; i < n; i++){
                    a[i]++;
                    if(a[i] % 4 == 0){
                        ok = true;
                        break;
                    }
                }

                if(ok){
                    cout << 1 << "\n";
                } else {
                    cout << 2 << "\n";
                }
            }
            
            continue;
        }

        for(int i = 0; i < n; i++){
            int cnt = 0;
            while(a[i] % k != 0){
                a[i]++;
                cnt++;
            }

            mn = min(mn,cnt);
        }

        cout << mn << "\n";
        
    }
        return 0;
}

    
