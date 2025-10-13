#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t; cin >> t;

    while(t--){
        int n,x; cin >> n >> x;

        int first = -1,last = 0;
        for(int i = 0; i < n; i++){
            int a; cin >> a;

            if(a == 1 && first < 0){
                first = i;
            } else if(a == 1){
                last = i;
            }
        }
        
        if(x >= (last - first + 1)){
            cout << "Yes\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}