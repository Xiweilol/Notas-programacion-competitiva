// Autor: Mintwi
// Fecha: 2025-10-22

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m; cin >> n >> m;

    vector <long long> arr(n+1);

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    vector <long long> prefR(n+1,0);
    vector <long long> prefL(n+1,0);

    for(int i = 2; i <= n;i++){
        //si la resta es negativo, significa que no tiene que restarle vida
        prefR[i] = prefR[i-1] + max(0ll,arr[i-1] - arr[i]);
    }

    
    for(int i = 2; i <= n;i++){
        //contamos de derecha a izquierda
        prefL[i] = prefL[i-1] + max(0ll,arr[i] - arr[i-1]);
    }

    while(m--){
        int s,t; cin >> s >> t;

        if(s < t) {
            cout << prefR[t] - prefR[s] << "\n";
        } else {
            cout << prefL[s] - prefL[t] << "\n";
        }
    }
    return 0;
}