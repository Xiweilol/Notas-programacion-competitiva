// Autor: Mintwi
// Fecha: 2026-05-18
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll mod = 1000000000 + 7;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        int cntones = 0;
        int cntzeros = 0;
        int cnttwos = 0;

        for(int i = 0; i < n; i++){
            int w; cin >> w;

            if(w == 1){
                cntones++;
            } else if(w == 2){
                cnttwos++;
            } else{
                cntzeros++;
            }
        }

        if(cntones == 0){
            cout << (cnttwos / 3) + cntzeros << "\n";
        } else if(cnttwos == 0){
            cout << (cntones / 3) + cntzeros << "\n";
        } else{
            int temp = cntones;
            int temp2 = cnttwos;
            cntones -= min(temp,temp2);
            cnttwos -= min(temp,temp2);

            cout << min(temp,temp2) + (cntones / 3) + (cnttwos / 3) + cntzeros << "\n";

        }
        

    }

    return 0;
}