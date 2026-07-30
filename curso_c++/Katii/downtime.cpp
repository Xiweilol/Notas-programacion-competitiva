#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k; cin >> n >> k;

    vector <int> arr(n+1);

    arr[0] = 0;
    for(int i = 1; i <= n; i++){
        int t; cin >> t;

        arr[i] = t;
    }
    int mx = INT_MIN;
    int act = 0;
    int l = 1;

    //SACAr el maximo maquina activado en cada momento
    for(int i = 1; i <= n;i++){
        //termino
        while(l <= n && arr[i] - arr[l] >= 0){
            //cout << "entro aqui\n";
            if(act > 0) act--;
            if(i == l) break;;
            l++;
        }
        
        act += 1;
        //cout << act << " maximo = " << mx << "\n";
        arr[i] += 1000;
        mx = max(mx,act);
    }

    cout << (k == 1 ? mx : (mx+k-1) / k) << "\n"; 
}