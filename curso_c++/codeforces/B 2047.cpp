// Autor: Mintwi
// Fecha: 2025-12-21

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

        map <char, int> freq;

        for(char c : s){
            freq[c]++;
        }

        char maxfreqlet;
        char minfreqlet;
        int maximofreq = -100; 
        int minimofreq = 100;

        for(auto[c,f] : freq){
            if(f > maximofreq){
                maximofreq = f;
                maxfreqlet = c;
            }
            if(f <= minimofreq){
                minimofreq = f;
                minfreqlet = c;
            }
        }

        //una vez tenemos identificadpo las letras, empezamos a remplazar

        for(int i = 0; i < n; i++){
            if(s[i] == minfreqlet){
                s[i] = maxfreqlet;
                break;
            }
        }

        cout << s << "\n";

    }

    return 0;
}