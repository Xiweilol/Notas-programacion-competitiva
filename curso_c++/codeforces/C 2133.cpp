// Autor: Mintwi
// Fecha: 2026-05-24
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll mod = 1000000000 + 7;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        //con sultamos todo los nodos para buscar el inicio

        vector <pair<int,int>> a;
        string s = "";
        for(int i = 1; i <= n; i++){
            s += " " + to_string(i);
            
        }

        for(int i = 1; i <= n; i++){
            cout << "? " << i << " " << n << s << "\n";
            cout.flush();
            int ans; cin >> ans;
            a.push_back({ans,i});
        }

        sort(a.rbegin(),a.rend());
        int x = a[0].second;
        int y = a[0].first;
        vector <int> res;

        res.push_back(x);

        while(y > 1){
            int nxt = -1;
            int temp = 0;
            for(auto[longitud,nodo] : a){
                //posible candidato
                if(longitud == y-1){
                    cout << "? " << x  << " 2 " << x << " " << nodo << "\n";
                    cout.flush();
                    int ans; cin >> ans;
                    if(ans == 2){
                        nxt = nodo;
                        temp = longitud;
                        break;
                    } 
                }
            }

            res.push_back(nxt);
            x = nxt;
            y = temp;
        }

        cout << "! " << res.size();
        for(int i : res){
            cout << " " << i;
        }

        cout << "\n";
        cout.flush();
    }

    return 0;
}