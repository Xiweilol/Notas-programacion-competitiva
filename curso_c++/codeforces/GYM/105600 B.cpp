#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;

    vector <long long> arr(n);

    for(int i = 0; i < n; i++) cin >> arr[i];

    sort(arr.begin(),arr.end());

    long long ans = 0;

    for(int i = 0; i < n - 1; i++){
        ans += arr[i] + 1;
    }

    cout << ans + 2 << "\n";

    return 0;
}