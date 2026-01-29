// Autor: Mintwi
// Fecha: 2026-01-29

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){

        int n; cin >> n;

        string s; cin >> s;

        vector <int> pos;

        for(int i = 0; i < n; i++){
            if(s[i] == '1'){
                pos.push_back(i);
            }
        }

        if(pos.empty()){
            cout << (n+2) / 3 << "\n";
            continue;
        }

        int total = pos.size();

        int inicial = pos[0];

        total += (inicial+1) / 3;

        for(int i = 0; i < pos.size()-1; i++){
            int k = pos[i+1] - pos[i] - 1;

            total += k/3;
        }

        int finale = (n-1) - pos.back();
        total += (finale + 1) / 3;

        cout << total << "\n";

    }

    return 0;
}