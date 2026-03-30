// Autor: Mintwi
// Fecha: 2026-03-30
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll mod = 1000000000 + 7;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a,b; cin >> a >> b;

    
    int sobra = a / b;

    int ans = a + sobra;
    sobra += a % b;
    

    //cout << sobra << "\n";
    while(sobra > 0){
        int temp = sobra;
        sobra /= b;

        ans += sobra;
        if(sobra == 0) continue;
        sobra += temp % b;
    }


    cout << ans << "\n";
    
    return 0;
}