// Autor: Mintwi
// Fecha: 2026-04-17
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll mod = 1000000000 + 7;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,m; cin >> n >> m;

    vector<vector<int>> matriz(n,vector<int>(m));

    int sum = 0;
    int mn = 1005;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> matriz[i][j];
            sum += matriz[i][j];
            if((i+j) & 1){
                mn = min(mn,matriz[i][j]);
            }
        }
    }

    
    if(n % 2 == 0 && m % 2 == 0){
        cout << sum - mn << "\n";
    } else{
        cout << sum << "\n";
    }

    return 0;
}