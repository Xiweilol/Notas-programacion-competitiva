// Autor: Mintwi
// Fecha: 2025-12-17

#include <bits/stdc++.h>
#define nl "\n";
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        string s; cin >> s;

        int sizes = s.size()-1;

        string copys = s; 

        bool orgin = true;

        int l = 0, r = sizes;

        while(l < r){
            if(s[l] < s[r]){
                break;
            } else if(s[r] < s[l]){
                orgin = false;
                break;
            }

            l++;
            r--;
        }

        if(orgin){
            cout << s << nl;
        } else{
            reverse(copys.begin(),copys.end());

            cout << copys << s << nl;
        }
    }

    return 0;
}