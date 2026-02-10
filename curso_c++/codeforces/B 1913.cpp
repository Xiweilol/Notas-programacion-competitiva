// Autor: Mintwi
// Fecha: 2026-02-09

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        string s; cin >> s;

        int cntZero = count(s.begin(),s.end(),'0');
        int cntOne = s.size() - cntZero;
        
        bool zeros = true;
        bool ones = true;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '0'){
                cntOne--;
                if(cntOne < 0){
                    ones = false;
                    break;
                }
            } else{
                cntZero--;

                if(cntZero < 0){
                    zeros = false;
                    break;
                }
            }
            
        }

        if(!ones){
            cout << cntZero  << "\n";
        } else if(!zeros){
            cout << cntOne << "\n";
        } else {
            cout << cntOne << "\n";
        }

        
    }

    return 0;
}