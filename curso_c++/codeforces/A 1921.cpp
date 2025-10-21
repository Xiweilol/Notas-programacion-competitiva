// Autor: Mintwi
// Fecha: 2025-10-20

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        vector <pair<int,int>> arr;

        for(int i = 0; i < 4 ; i++){
            int x,y; cin >> x >> y;
            arr.push_back({x,y});
        }

        sort(arr.begin(),arr.end());

        int w = 0, h = 0;

        vector <int> lados;
        for(auto& par : arr){
            lados.push_back(par.second);
        }

        w = abs(lados[0] - lados[1]);

        h = abs(lados[2] - lados[3]);

        cout << w * h << "\n";
    }

    return 0;
}