#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,q; cin >> n >> q;

    vector <int64_t> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    vector <int64_t> prefix(n);

    prefix[0] = arr[0];

    for(int i = 1; i < n; i++){
        prefix[i] = prefix[i-1] + arr[i];
    }

    for(int i = 0; i < q; i++){
        long long a,b; cin >> a >> b;
        // convertirlo a base 0
        a--;
        b--;

        long long ans = (a == 0) ? prefix[b] : prefix[b] - prefix[a-1];
        cout << ans << "\n";
    }   

    return 0;
}