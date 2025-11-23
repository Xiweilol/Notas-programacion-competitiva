// Autor: Mintwi
// Fecha: 2025-11-22

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        vector <int> a(n+1);
        map <int,int> freq;
        for(int i = 1; i <= n; i++){
            cin >> a[i];

            freq[a[i]]++;
        }

        if(freq.size() == 1){
            cout << -1 << "\n";
            continue;
        }

        sort(a.begin(),a.end());

        auto iterador = *freq.begin();
        int cnt = iterador.second;

        cout << cnt << " " << n - cnt << "\n";

        for(int i = 1; i <= cnt; i++){
            cout << a[i] << " ";
        }
        cout << "\n";
        for(int i = cnt + 1; i <= n; i++){
            cout << a[i] << " "; 
        }

        cout << "\n";
    }

    return 0;
}