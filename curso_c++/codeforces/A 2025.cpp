#include <bits/stdc++.h>

using namespace std;

int main(){
    int q; cin >> q;

    while(q--){
        string s,t; cin >> s >> t;

        int sl = (int)s.size();
        int tr = (int)t.size();

        int mini = min(sl,tr);
        int l = 0;

        while(l < mini && s[l] == t[l]){
            l++;
        }
        
        int ans = (l == 0) ? sl + tr : sl + tr - l + 1;
        cout << ans << "\n";
    }

    return 0;
}