// Autor: Mintwi
// Fecha: 2025-10-21

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

    vector <long long> prefixR(n+1,0);

    vector <long long> prefixL(n+1,0);

    //hacemos prefix desde derecha, con el anterior mas grande que el actuak
    for(int i = 2; i <= n; i++){
        prefixR[i] = prefixR[i-1] + (arr[i-1] > arr[i] ? arr[i-1] - arr[i] : 0ll);
    }

    //hacemos prefix desde izquierda,con el actual mas grande que el anterior
    for(int i = 2; i <= n; i++){
        prefixL[i] = prefixL[i-1] + (arr[i] > arr[i-1] ? arr[i] - arr[i-1] : 0ll);
    }

    while(m--){
        int a1,a2; cin >> a1 >> a2;

        if(a1 < a2){
            cout << prefixR[a2] - prefixR[a1] << "\n";
        } else {
            cout << prefixL[a1] - prefixL[a2] << "\n";
        }
    }
    return 0;
}