#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        string s; cin >> s;
        unordered_set <int> cont;
        cont.insert(s.front());
        cont.insert(s.back());

        bool logra = false;
        for(int i = 1; i <= n - 2; i++){
            if(cont.count(s[i])){
                logra = true;
                break;
            }
            cont.insert(s[i]);
        }

        if(logra){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
        
    }

    return 0;
}