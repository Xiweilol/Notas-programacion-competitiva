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

        int cnt = 1;

        int pos = arr[0];
        for(int i = 1; i < n; i++){
            if(pos + 1 < arr[i]){
                cnt++;
                pos = arr[i];
            }

        }
        cout << cnt << "\n";
    }

    return 0;
}