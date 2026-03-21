// Autor: Mintwi
// Fecha: 2026-03-20
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
        int n,k; cin >> n >> k;

        string s; cin >> s;

        //checamos primero a ver si hay 1's consecutivos tales que es >= k

        int len = 0;
        bool ok = true;
        for(int i = 0; i < n; i++){
            if(s[i] == '1'){
                len++;
                if(len >= k){
                    ok = false;
                    break;
                }
            } else {
                len = 0;
            }
        }

        if(!ok){
            cout << "NO\n";
        } else {
            cout << "YES\n";

            int l = 1, r = n;
            //en los unos le ponemos los mas pequeños
            for(int i = 0; i < n; i++){
                if(s[i] == '0'){
                    cout << r << " ";
                    r--;
                } else {
                    cout << l << " ";
                    l++;
                }
            }
            cout << "\n";
        }
    }

    return 0;
}