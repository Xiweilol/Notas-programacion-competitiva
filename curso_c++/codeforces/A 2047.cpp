// Autor: Mintwi
// Fecha: 2025-12-03

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map <int,int> M;
    int cont = 1;
    for(int i = 1; i < 1000; i +=2){
        M[cont] = i * i;

        cont++;
    }
    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        vector <int> a(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        
        int sum = 0;
        int ans = 0;
        int conta = 1;
        for(int i = 0; i < n; i++){
            sum += a[i];
            while(M[conta] < sum){
                conta++;
            }
            if(sum == M[conta]){
                ans++;
                conta++;       
            }
        }

        

        cout << ans << "\n";
    }

    return 0;
}