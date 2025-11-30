// Autor: Mintwi
// Fecha: 2025-11-29

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n,a,b;
        cin >> n >> a >> b;

        if(b > a * 2){
            cout << n * a << "\n";
        } else{
            int div = n / 2;
            if(n % 2 == 0){
                cout << b * div << "\n";
            } else{
                cout << b * div + a << "\n";
            }
            
        }
    }

    return 0;
}