// Autor: Mintwi
// Fecha: 2026-02-22
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int separar(int n){
    int sumDigit = 0;
    while(n > 0){
        sumDigit += n % 10;
        n /= 10;
    }

    return sumDigit;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int x; cin >> x;

        int cnt = 0;
        for(int i = x; i <= x + 100; i++){
            if(x + separar(i) == i){
                cnt++;
            }
        }

        cout << cnt << "\n";
    }

    return 0;
}