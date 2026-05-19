// Autor: Mintwi
// Fecha: 2026-05-19
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll mod = 1000000000 + 7;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        string s; cin >> s;

        map <char,int> freq;

        int ans = 0;
        for(int i = s.size()-1; i >= 0; i--){

            freq[s[i]]++;
            if(s[i] == '1'){
                if(freq['2'] >= 2){
                    ans++;
                    freq[s[i]]--;
                }else if(freq['2'] == 1){
                    ans++;
                    freq[s[i]]--;
                }

            } else if(s[i] == '3'){
                if(freq['2'] >= 2){
                    ans++;
                    freq[s[i]]--;
                }else if(freq['2'] == 1){
                    ans++;
                    freq[s[i]]--;
                }
            } else if(s[i] =='4'){
                ans++;
            }
 
        }

        cout << ans << "\n";
    }

    return 0;
}