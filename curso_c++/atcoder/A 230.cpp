// Autor: Mintwi
// Fecha: 2025-11-05

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    if(n >= 42){
        n++;
    }
    string ans = "AGC0";
    string num = to_string(n);
    if(num.size() == 1){
        ans += '0';
        ans += num;
        cout << ans << "\n";
    } else {
        ans += num;
        cout << ans << "\n"; 
    }
    
    

    return 0;
}