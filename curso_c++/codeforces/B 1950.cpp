// Autor: Mintwi
// Fecha: 2026-01-28

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        string firsts = "";
        string seconds = "";

        bool bott = true;

        for(int i = 0; i < 2 * n; i+=2){
            if(bott){
                firsts += "##";
                seconds += "..";
                bott = false;
            } else {
                firsts += "..";
                seconds += "##";
                bott = true;
            }
        }
        //cout << firsts << "\n";
        //cout << seconds << "\n";

        bool funci = true;
        for(int i = 0; i < 2 * n; i+= 2){
            if(funci){
                cout << firsts << "\n" << firsts << "\n";
                funci = false;
            } else {
                cout << seconds << "\n" << seconds << "\n";
                funci = true;
            }
        }

    }

    return 0;
}