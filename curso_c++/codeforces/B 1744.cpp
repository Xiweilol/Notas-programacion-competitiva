// Autor: Mintwi
// Fecha: 2025-11-13

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n,q; cin >> n >> q;

        int cntEven = 0;
        int cntOdd = 0;
        ll sum = 0;

        for(int i = 0; i < n; i++){
            int a; cin >> a;

            sum += a;

            if(a & 1){
                cntOdd++;
            } else {
                cntEven++;
            }
        }

        while(q--){
            int type,x; cin >> type >> x;
            
            if(type == 0 && cntEven > 0){
                sum += cntEven * x;
                if(x & 1){
                    cntOdd += cntEven;
                    cntEven = 0;
                }    
            } else if(type == 1 && cntOdd > 0){
                sum += cntOdd * x;
                if(x & 1){
                    cntEven += cntOdd;
                    cntOdd = 0;
                }
            }
            cout << sum << "\n";
        }

    }

    return 0;
}