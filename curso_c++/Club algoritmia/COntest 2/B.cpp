#include <bits/stdc++.h>


typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        vector <ll> a(n);

        for(int i = 0; i < n; i++) cin >> a[i];

        ll act = a[0];

        sort(a.begin(),a.end());
        
        while(act < a[n-1]){
            int l = 0, r = n-1;
            ll temp = 0;
                while(l <= r){
                    int mid = (l+r) / 2;

                    if(a[mid] > act){
                        temp = mid;
                        r = mid -1;
                    } else {
                        l = mid +1;
                    }

                }
            ll diff = ((a[temp] - act) / 2) + ((a[temp] - act) % 2 != 0); 
            act += diff;
            a[temp] -= diff;
        }
        
        cout << act << "\n";
    }
}