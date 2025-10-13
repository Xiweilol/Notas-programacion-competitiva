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

        if(l == r){
            cout << arr[l] << " ";
        }
        while(l < r){

            cout << arr[l] << " ";
        
            cout << arr[r] << " ";
            
            if(l + 1  == r - 1){
                cout << arr[l+1] << " ";
                break;
            }
            l++;
            r--;
        }

        cout << "\n";
    }

    return 0;
}