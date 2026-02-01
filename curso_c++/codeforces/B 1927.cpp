// Autor: Mintwi
// Fecha: 2026-02-01

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        vector <int> a(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        vector <int> freq(26,0);
        string s = "";
        

        for(int i = 0; i < n; i++){
            for(int c = 0; c < 26; c++){
                if(freq[c] == a[i]){
                    s += 'a' + c;
                    freq[c]++;
                    break;
                }
            }
        }

        cout << s << "\n";
        
    }

    return 0;
}