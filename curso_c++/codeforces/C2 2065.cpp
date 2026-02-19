//MIntwi

#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n,m; cin >> n >> m;

        vector <ll> a(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        vector <ll> b(m);

        for(int i = 0; i < m; i++){
            cin >> b[i];
        }

        sort(b.begin(),b.end());
        ll act = max(a[n-1], b[m-1] - a[n-1]);

        bool ok = true;
        for(int i = n-2; i >= 0; i--){
            int l = 0, r = m-1;

            ll temp = LLONG_MIN;
            if(a[i] <= act){
                temp = max(temp,a[i]);
            }
            while(l <= r){
                int mid = (l + r) / 2;

                if(b[mid] - a[i] <= act){
                    temp = max(temp,b[mid]-a[i]);
                    l = mid + 1;
                }else {
                    r = mid - 1;
                }
            }

            if(temp == LLONG_MIN){
                ok = false;
                break;
            } else{
                act = temp;
            }
        }

        cout << (ok ? "YES" : "NO") << "\n";
     }
}
