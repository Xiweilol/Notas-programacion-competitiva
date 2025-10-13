#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
    int t; cin >> t;

    while(t--){
        int n,j,k; cin >> n >> j >> k;
        vector <int> arr;
        int mayor = 0;
        for(int i = 0; i < n; ++i){
            int a; cin >> a;
            mayor = max(mayor,a);
            arr.push_back(a);
        }
        if(k >= 2){
            cout << "YES\n";
        } else {
            if(arr[j -1 ] == mayor ){
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
}