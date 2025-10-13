#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        vector <int> arr(n);

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        sort(arr.begin(),arr.end());

        int ans1 = 0, ans2 = 0;

        for(int i = 0; i < n; i++){
            if((arr[i] + arr[n-1]) % 2 == 0){
                break;
            }
            ans1++;   
        }

        for(int i = n-1; i > 0; i--){
            if((arr[0] + arr[i]) % 2 == 0){
                break;
            }
            ans2++;   
        }

        cout << min(ans1,ans2) << "\n";
    }

    return 0;
}