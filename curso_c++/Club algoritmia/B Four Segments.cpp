#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        vector <int> arr(4);

        for(int i = 0; i < 4; i++){
            cin >> arr[i];
        }

        sort(arr.begin(),arr.end());

        int minix = arr[0];

        int secundmax = arr[2];

        cout << minix * secundmax << "\n";

    }

    return 0;
}