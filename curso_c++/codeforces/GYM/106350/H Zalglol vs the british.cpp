// Autor: Mintwi
// Fecha: 2026-02-08

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    vector <int> a(n+1);

    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    sort(a.begin(),a.end());

    vector <ll> pref(n+1);
    
    //unordered_map <int,int> pos;
    for(int i = 1; i <= n; i++){
        pref[i] = pref[i-1] + a[i];
        //pos[i] = pref[i];
    }

    // for(auto [k,v] : pos){
    //     cout << k << " " << v << "\n";
    // }
    int q; cin >> q;
    
    while(q--){
        int x; cin >> x;

        int ans = 0;

        int lo = 0, high = n;

        while(lo <= high){
            int mid = lo + ( high - lo) / 2;
            //cout << mid << " ";
            //cout << "x dd";
            if(x >= pref[mid]){
                //cout << "caso 3 lo:" << mid << endl;
                ans = mid;
                lo = mid + 1;
            } else{
                //cout << "caso 3 hig:" << mid << endl;
                high = mid-1;
            }
        }

        cout << ans << "\n";

    }


    return 0;
}