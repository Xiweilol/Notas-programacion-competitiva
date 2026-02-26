#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        vector <int> a(n);

        int mx = -1000;
        int mn = 1000;

        int idx_mx = 0,idx_mn = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];

            if(a[i] > mx){
                mx = a[i];
                idx_mx = i;
            }

            if(a[i] < mn){
                mn = a[i];
                idx_mn = i;
            }
        }


        
        //de los extremos sacamos al distancia que esta mas lejos de los limites
        int mov = min(max(idx_mn,idx_mx)+1,n - min(idx_mn,idx_mx));

        int needLeft = min(idx_mn,idx_mx) + (n - max(idx_mn,idx_mx));

        cout << min(mov,needLeft+1) << "\n";

        
    }
    


}