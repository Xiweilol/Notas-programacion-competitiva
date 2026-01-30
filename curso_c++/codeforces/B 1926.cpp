// Autor: Mintwi
// Fecha: 2026-01-30

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){

        int n; cin >> n;

        vector <string> a(n);
        vector <int> counts;

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        for(int i = 0; i < n; i++) {
            int row_ones = 0;
            for(char c : a[i]) {
                if(c == '1') row_ones++;
            }
            
            if(row_ones > 0) {
                counts.push_back(row_ones);
            }
        }        

        if(counts[0] == counts[1]){
            cout << "SQUARE\n";
        } else{
            cout << "TRIANGLE\n";
        }

    }

    return 0;
}