#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;
        int ans = 0;
        vector <int> arr(n);
        
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        sort(arr.begin(),arr.end());
        unordered_set <int> s(arr.begin(),arr.end());

        int mex = 0;
        while(s.count(mex)){
            mex++;
        }

        if(mex == k){
            cout << 0 << "\n";
            continue;
        }
        //debe de existir de 0 a k -1, no debe de existir k
        int faltante = 0;
        for(int x = 0; x < k; ++x){
            if(!s.count(x)){
                faltante++;
            }
        }

        int cntK = (int)count(arr.begin(),arr.end(),k);

        ans = max(faltante,cntK);
        cout << ans << "\n";

    }

    return 0;
}