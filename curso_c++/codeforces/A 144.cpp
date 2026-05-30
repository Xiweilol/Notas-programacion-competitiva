// Autor: Mintwi
// Fecha: 2026-05-29
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll mod = 1000000000 + 7;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;

    
    int mx = 0;
    int mxpos = 0;
    int mn = 1000;
    int mnpos = 0;
    for(int i = 1; i <= n; i++){
        int ai; cin >> ai;

        if(ai > mx){
            mx = ai;
            mxpos = i;
        }

        if(ai <= mn){
            mn = ai;
            mnpos = i;
        }
    }

    if(mxpos > mnpos){
        cout << (mxpos-1)+ (n - mnpos) - 1 << "\n";
    } else{
        cout << (mxpos-1)+ (n - mnpos) << "\n";
    }


    return 0;
}