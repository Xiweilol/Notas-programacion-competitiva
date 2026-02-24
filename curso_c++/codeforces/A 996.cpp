// Autor: Mintwi
// Fecha: 2026-02-23
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    vector <int> a = {100,20,10,5,1};

    int ans = 0;

    for(int num : a){
        ans += n / num;
        n %= num;
    }

    cout << ans << "\n";


    return 0;
}