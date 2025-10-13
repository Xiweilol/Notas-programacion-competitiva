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

        int l = 0, r = n - 1;

        bool pas = true;
        for(int i = 1; i <= n; i++){
            if(arr[l] == i){
                l++;
            } else if(arr[r] == i){
                r--;
            } else {
                pas = false;
                break;
            }
        }

        if(pas){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;

}