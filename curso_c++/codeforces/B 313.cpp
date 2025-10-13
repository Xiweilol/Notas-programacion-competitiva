#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;

    int m; cin >> m;


    vector <long long> prefix((int)s.size());
    for(int i = 1; i < (int)s.size(); i++){
        //arrastrar lo acumulado
        prefix[i] = prefix[i-1];
        if(s[i] == s[i-1]){
            prefix[i]++;
        }
    }

    while(m--){
        int l,r; cin >> l >> r;
        long long ans = prefix[r-1] - prefix[l-1];

        cout << ans << "\n";
    }

    return 0;
}