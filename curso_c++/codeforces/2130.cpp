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
        int ans = 0;
        for(int i = 0; i < n ; i++){
            //pro cada 0, le sumamos 1, es lo mas optimo cuando hay un cero
            if(arr[i] == 0 ){
                ans += 1;
                continue;
            }
            ans += arr[i];
        }

        cout << ans << "\n";
    }

    return 0;
}