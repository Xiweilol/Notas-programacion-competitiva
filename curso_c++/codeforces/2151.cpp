#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n,m; cin >> n >> m;

        vector <int> arr(m);
        for(int i = 0; i < m; i++){
            cin >> arr[i];
        }

        bool mayor = false;
        for(int i = 0; i < m - 1; i++){
            if(arr[i] >= arr[i+1]){
                mayor = true;
                break;
            }
        }

        int maximo = *max_element(arr.begin(),arr.end());
        if(mayor){
            cout << 1 << "\n";
        } else {
            cout << n - maximo + 1 << "\n";
        }
    }

    return 0;
}