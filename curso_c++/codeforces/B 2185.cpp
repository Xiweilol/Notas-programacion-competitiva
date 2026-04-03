#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        vector <int> a(n);

        int mx = -1e9;
        for(int i = 0; i < n; i++){
            cin >> a[i];

            mx = max(mx,a[i]);
        }

        cout << mx * n << "\n";

    }
}