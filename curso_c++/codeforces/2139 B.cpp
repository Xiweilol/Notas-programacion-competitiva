#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n,m; cin >> n >> m;
        vector <int> arr(n);
        long long ans = 0;
        for(int i = 0; i < n; ++i){
            int a; cin >> arr[i];
        }

        //reordenar el arreglo de mnor a mayor
        sort(arr.begin(),arr.begin() + n,greater<int> ());
        for(int i = 0; i < n; i++){
            ans += 1ll * arr[i] * max(0,m-i); 
        }

        cout << ans << "\n";
    }
    return 0;
}