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

        int l = arr[0],r = arr[0];

        bool pas = true;

        for(int i = 1; i < n; i++){
            if(arr[i] - 1 == l) {
                l = arr[i];
            } else if(arr[i] + 1 == r){
                r = arr[i];
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