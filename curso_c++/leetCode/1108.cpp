// Autor: Mintwi
// Fecha: 2026-09-05
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

class Solution {
public:
    string defangIPaddr(string address) {
        string ans = "";
        
        for(int i = 0; i < address.size();i++){
            
            if(address[i] == '.'){
                ans += "[.]";
            } else{
                ans += address[i];
            }
        }

        return ans;
    }
};

const ll mod = 1000000000 + 7;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
    }

    return 0;
}