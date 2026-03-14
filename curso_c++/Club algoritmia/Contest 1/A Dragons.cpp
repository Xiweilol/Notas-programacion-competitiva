#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){

    ios_base::sync_with_stdio(0); cin.tie(0);
    ll s,n; cin >> s >> n;


    vector <pair<int,int>> cont(n);

    for(int i = 0; i < n; i++){
        int x,y; cin >> x >> y;
        cont[i] = {x,y};
    }


    sort(cont.begin(),cont.end());

    bool ok = true;

    for(auto [k,v] : cont){
        if(s > k){
            s += v;
        } else {
            ok = false;
            break;
        }
    }


    cout << (ok ? "YES" : "NO") << "\n";

    return 0;
}