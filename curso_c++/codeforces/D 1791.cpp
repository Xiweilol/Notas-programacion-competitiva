// Autor: Mintwi
// Fecha: 2026-02-04


/*Im so fucking stupid*/
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

        vector <int> cntL(26,0),cntR(26,0);

        int distinctL = 0, distinctR = 0;

        for(char c : s){
            if(cntR[c - 'a'] == 0){
                distinctR++;
            }
            cntR[c - 'a']++;
        }

        int ans = 0;

        for(int i = 0; i < n-1; i++){
            int c = s[i] - 'a';

            //izquierda
            if(cntL[c] == 0) distinctL++;
            cntL[c]++;

            // derecha
            cntR[c]--;

            if(cntR[c] == 0) distinctR--;

            ans = max(ans,distinctL + distinctR);
        }

        cout << ans << "\n";
    }

    return 0;
}