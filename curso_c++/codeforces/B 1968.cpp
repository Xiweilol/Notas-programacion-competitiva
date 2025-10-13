#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;cin >>t;

    while(t--){
        int n,m; cin >> n >> m;

        string a,b; cin >> a >> b;

        int l = 0;

        for(int i = 0; i < m; i++){
            if(b[i] == a[l]){
                l++;
            }
        }

        cout << l << "\n";

    }

    return 0;
}