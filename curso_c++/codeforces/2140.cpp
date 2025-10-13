#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        string s; cin >> s;
        int primer_1 = -1;
        //encuentra el primer 1 que aparece
        for(int i = 0; i < n; ++i){
            if(s[i] == '1'){
                primer_1 = i;
            }
        }
        // si no encuentra ninguna
        if (primer_1 == -1) {
            cout << 0 << "\n";
            continue;
        }
        int cont = 0;

        for(int i = primer_1 + 1; i < n; ++i){
            if(s[i] == '0'){
                cont++;
            }
            if(cont == 2){
                break;
            }
        }

        cout << min(2,cont) << "\n";
    }

    return 0;
}