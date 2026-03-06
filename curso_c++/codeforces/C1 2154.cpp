//Mintwi

#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

const int maxn = 2e5 + 5;

vector <int> primos;
void generarPrimo(){
    for(int i = 2; i <= maxn; i++){
        bool ok = true;
        for(int j = 2; j * j <= i; j++){
            if(i % j == 0){
                ok = false;
                break;
            }
        }

        if(ok) primos.push_back(i);
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    generarPrimo();
    
    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        vector <int> arr(n);
        
        for(int i = 0; i < n; i++) cin >> arr[i];

        set <int> S;
        //vamos iterando a cada element o y sacamos 
        for(int i = 0; i < n; i++){
            int cnt = 0;
            // a cada elemento le sacamos primos
            while(primos[cnt] <= arr[i]){
                
            }
        }

    }



    
}