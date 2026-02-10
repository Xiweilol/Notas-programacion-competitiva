// Autor: Mintwi
// Fecha: 2026-02-09

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        string s; cin >> s;

        
        int cntClose = 0;
        int cntOpen = 0;

        bool swich = false;;
        for(int i = 0; i < n; i++){
            if(swich){
                if(s[i] == ')' && cntOpen > 0){
                    if(cntClose > 0) cntClose--;
                    cntOpen--;
                    if(cntOpen == 0){
                        swich = false;
                    }
                } else if(s[i] == '('){
                    cntOpen++;
                }
                continue;
            }
            if(s[i] == '('){
                cntOpen++;
                swich = true;
            } else {
                cntClose++;
            }

        }

        cout << cntOpen << "\n";
    }
    return 0;
}