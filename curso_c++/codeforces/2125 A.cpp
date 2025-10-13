#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        string s; cin >> s;
        
        sort(s.rbegin(),s.rend());

        cout << s << "\n";
    }
    return 0;
}