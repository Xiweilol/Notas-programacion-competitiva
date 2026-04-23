#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n,q; cin >> n >> q;

    vector <ll> primos(n+1,0);
    
    //vector <vector<int>> as(n);
    
    primos[0] = 1;
    primos[1] = 1;
    for(ll i = 2; i <= n; i++){
        if(primos[i] == 0){
            primos[i] = i;
            
            for(ll j = i*i; j <= n;j+=i){
                if(primos[j] == 0) primos[j] = i;
                
            }
        }
    }

    vector<vector<int>> construccion;

    

    for(int i = 1; i <= n; i++){
        vector <int> temp;

        int x = i;

        while(x > 1){
            temp.push_back(primos[x]);
            x /= primos[x];
        }

        construccion.push_back(temp);
    }

    sort(construccion.begin(),construccion.end());

    while(q--){
        ll temp = 1;

        int k; cin >> k;

        k--;
        vector <int> a = construccion[k];

        for(int num : a){
            temp *= num;
        }

        cout << temp << "\n";
    }

    
}