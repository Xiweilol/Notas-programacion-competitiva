// Autor: Mintwi
// Fecha: 2026-05-23
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

        vector <int> a(n);

        set <int> S;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            S.insert(a[i]);
        }

        int diff = S.size();
        
        sort(a.begin(),a.end());

        int cercano = -1;

        int l = 0, r = n-1;

        while(l <= r){
            int mid = (r + l)/2;

            if(a[mid] >= diff){
                cercano = a[mid];
                r = mid-1;
            } else {
                l = mid+1;
            }

        }

        if(cercano != -1){
            cout << cercano << "\n";
        } else{
            cout << diff << "\n";
        }


        
    }

    return 0;
}