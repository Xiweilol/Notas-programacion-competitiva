// Autor: Mintwi
// Fecha: 2025-12-15

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        string s; cin >> s;

        int cnt = 0;

        int large = s.size() - 1;
        bool pas = true;
        for(int i = 0; i < large; i++){
            if(s[i] == '@'){
                cnt++;
            } else if(s[i] == '*'){
                if(s[i+1] == '*'){
                    pas = false;
                    break;
                }
            }

        }

        if(s[large] == '@' && pas){
            cnt++;
        }
        cout << cnt << "\n";
    }

    return 0;
}