#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;

    vector <long long> arr(n);

    for(int i = 0; i < n ; i++) cin >> arr[i];

    //hacemos prefix sum, para notar los limites que llega cada monton
    //asi para verificar mejor el rango;
    vector <long long> prefix(n);

    prefix[0] = arr[0];

    for(int i = 1; i < n ; i++){
        prefix[i] = prefix[i-1] + arr[i];
    }

    int m; cin >> m;

    while(m--){
        int q; cin >> q;

        //usamos lowebound, significa que encontrar el primer elemento en prefix donde 
        // prefix sea >= q, devuelve el indice
        int ans = int(lower_bound(prefix.begin(),prefix.end(),q) - prefix.begin());

        cout << (ans + 1) << "\n";
    }
    return 0;
}