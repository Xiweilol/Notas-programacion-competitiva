// Autor: Mintwi
// Fecha: 2026-09-05
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
class Solution {
public:
    int balancedStringSplit(string s) {
        int cntR = 0, cntL = 0;
        int ans = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'R'){
                cntR++;
            } else{
                cntL++;
            }

            if(cntR == cntL){
                ans++;
                cntR = 0;
                cntL = 0;
            }
        }

        return ans;
    }
};
const ll mod = 1000000000 + 7;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s = "RLRRLLRLRL";

    Solution p1;

    int asn = p1.balancedStringSplit(s);

    

    cout << asn;
}