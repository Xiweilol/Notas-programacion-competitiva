// Autor: Mintwi
// Fecha: 2026-02-24
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n,h,l; cin >> n >> h >> l;

        if(h > l){
            swap(h,l);
        }

        int cnth = 0,cntl = 0;
        for(int i = 0; i < n; i++){
            int ai; cin >> ai;

            if(ai <= h){
                cnth++;
            }
            if(ai <= l){
                cntl++;
            }
        }

        int ans = min(cnth,cntl / 2);
        cout <<  ans << "\n";
    }

    return 0;
}