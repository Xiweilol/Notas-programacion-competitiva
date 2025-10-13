#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        string s; cin >> s;
        
        int x = 0,y = 0;
        bool pas = false;;
        for(int i = 0; i < n; i++){
            if(s[i] == 'U'){
                y++;
            } else if(s[i] == 'R'){
                x++;
            } else if(s[i] == 'L'){
                x--;
            } else {
                y--;
            }

            if (x == 1 && y == 1){
                pas = true;
                break;
            }
        }

        if(pas){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
        
    }

    return 0;
}