#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        string s; cin >> s;

        int cntu = 0;
        for(char& c : s){
            if(c == 'U'){
                cntu++;
            }
        }

        if(cntu % 2 == 0){
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }

    return 0;

}