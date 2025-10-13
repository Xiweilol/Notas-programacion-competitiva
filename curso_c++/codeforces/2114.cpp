#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n,k; cin >> n >> k;

        string s; cin >> s;

        vector <int> arr;

        int unos = 0;
        int ceros = 0;
        for(char& c: s){
            if(c - '0' == 0){
                ceros++;
            } else {
                unos++;
            }
            arr.push_back(c - '0');
        }

        int minimo = max(unos,ceros) - (n/2);
        int maximo = (unos / 2) + (ceros / 2);

        if(k >= minimo && k <= maximo && (k - minimo) % 2 == 0){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}