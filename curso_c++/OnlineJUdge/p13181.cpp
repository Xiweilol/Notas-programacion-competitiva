// Autor: Mintwi
// Fecha: 2026-06-07
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll mod = 1000000000 + 7;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;

    while(cin >> s){

        int n = s.size();

        vector <int> pos;

        for(int i = 0; i < n; i++){
            if(s[i] == 'X'){
                pos.push_back(i);
            }
        }

        int ans = 0;

        ans = max(ans,pos[0]-1);

        ans =max(ans,n-1-pos.back()-1);

        for(int i = 1; i < pos.size();i++){
            int temp = pos[i] - pos[i-1] - 1;

            ans = max(ans,(temp-1) / 2);
        }

        cout << ans << "\n";
    }

    return 0;
}