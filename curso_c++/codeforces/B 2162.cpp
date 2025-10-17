#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        string s; cin >> s;

        cout << 2 << "\n";

        for(int i = 1; i < n; i++){
            if(s[i] == '1' && s[i-1] == '0'){
                cout << i << " " << i + 1 << "\n";
                break;
            }
        }
    }

    return 0;
}