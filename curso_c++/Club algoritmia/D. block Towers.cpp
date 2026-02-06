// Autor: Mintwi
// Fecha: 2026-02-05

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

        sort(a.begin()+1,a.end());

        for(int i = 1; i < n; i++){
            if(a[i] > a[0]){
                a[0] += (a[i] - a[0] + 1) / 2;
            }
        }

        cout << a[0] << "\n";
    }

      return 0;  
    }
    
