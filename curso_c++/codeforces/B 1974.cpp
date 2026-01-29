// Autor: Mintwi
// Fecha: 2026-01-28

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

        map <char,char> dic;

        set <char> S(s.begin(),s.end());

        vector <char> a(S.begin(),S.end());

        int len = a.size();
        int l = 0, r = len-1;
        while(l < len && r > -1){
            dic[a[l]] = a[r];
            l++;
            r--;
        }

        string ans = "";

        for(int i = 0; i < n; i++){
            ans += dic[s[i]];
        }

        cout << ans << "\n";
        

    }

    return 0;
}