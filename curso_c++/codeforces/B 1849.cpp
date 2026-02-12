// Autor: Mintwi
// Fecha: 2026-02-11

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;

        vector <pair<int,int>> a;

        for(int i = 0; i < n; i++){
            int ai; cin >> ai;

            ai %= k;
            if(ai== 0) ai = k;

            a.push_back({ai,i+1});
        }

        sort(a.begin(),a.end(),[](const auto& a,const auto& b){
            if(a.first != b.first){
                return a.first > b.first;
            }
            return a.second < b.second;
        });

        //cout << a[n-1].second << " ";

        // for(auto& [k,v] : a){
        //      cout << "llave: " << k << "valor: " << v << "\n";
        //  }
        for(int i = 0; i < n; i++){
             cout << a[i].second << " ";
        }

        cout << "\n";
    }

    return 0;
}