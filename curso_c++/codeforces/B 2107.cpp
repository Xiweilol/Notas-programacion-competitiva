#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n,k; cin >> n >> k;

        int sum = 0;
        vector <int> arr;

        for(int i = 0; i < n; i++){
            int a; cin >> a;
            arr.push_back(a);
            sum += a;
        }

        sort(arr.begin(),arr.end());
        arr[n-1]--;
        sort(arr.begin(),arr.end());

        if(arr[n - 1] - arr[0] > k || sum % 2 == 0){
            cout << "Jerry\n";
            continue;
        }

        cout << "Tom\n";
        
    }

    return 0;
}