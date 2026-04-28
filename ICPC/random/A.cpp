// Autor: Mintwi
// Fecha: 2026-04-27
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll mod = 1000000000 + 7;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    map <int,int> freq;

    ll sum = 0;

    int n,k; cin >> n >> k;

    freq[0] = 1;

    ll ans = 0;
    for(int i = 0; i < n; i++){
        int ai; cin >> ai;

        if(ai % k== 0){
            sum++;
        }
        
        sum %= k;
        ans += freq[sum];

        freq[sum]++;

    }

    cout << ans << "\n";


    return 0;
}