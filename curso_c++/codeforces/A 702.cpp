#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;

    vector <int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int l = 1, ans = 1; 

    for(int i = 1; i < n; i++){
        if(arr[i] > arr[i-1]){
            l++;
        } else {
            l = 1;
        }
        ans = max(ans, l);

    }

    cout << ans << "\n";

    return 0;
}