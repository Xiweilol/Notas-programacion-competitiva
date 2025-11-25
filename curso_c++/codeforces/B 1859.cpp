// Autor: Mintwi
// Fecha: 2025-11-23

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        vector <ll> mn1;
        vector <ll> mn2;

        while(n--){
            int m; cin >> m;
            vector <int> temp(m);
            for(int i = 0; i < m; i++){
                cin >> temp[i];
            }

            sort(temp.begin(),temp.end());

            mn1.push_back(temp[0]);
            mn2.push_back(temp[1]);
        }

        //insert, vete el final del arreglo a agregar
        //despues el inicio y el fin del otro arreglo
        mn1.insert(mn1.end(),mn2.begin(),mn2.end());

        ll minimo = *min_element(mn1.begin(),mn1.end());

        sort(mn2.begin(),mn2.end());

        ll ans = minimo + 1LL * accumulate(mn2.begin(),mn2.end(),0LL) - mn2[0];

        cout << ans << "\n";
    }

    return 0;
}