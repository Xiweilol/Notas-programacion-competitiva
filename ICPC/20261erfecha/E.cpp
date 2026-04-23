#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){
    int n,q; cin >> n >> q;

    vector <bool> primos(n+1,false);
    vector <int> primos_real;
    vector <vector <int>> as(n);
    
    for(int i = 2; i <= n; i++){
        if(!primos[i]){
            primos[i] = true;
            primos_real.push_back(i);
            for(int j = i*i; j <= n;j+=i){
                primos[j] = true;
                as[j].push_back[i];
            }
        }
    }

    
}