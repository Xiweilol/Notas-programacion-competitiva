#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        vector <int> arr;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < 4; j++){
                char c; cin >> c;
                if(c == '#'){
                    arr.push_back(j + 1);
                }
            }
        }

        reverse(arr.begin(),arr.end());

        for(int n : arr){
            cout << n << " ";
        }

        cout << "\n";

    }

    return 0;
}