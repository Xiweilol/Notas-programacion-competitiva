// Autor: Mintwi
// Fecha: 2025-11-10

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        vector <int> arr(n+1,0);

        for(int i = 1; i <= n; i++){
            cin >> arr[i];
        }

        sort(arr.begin(),arr.end());

        int pas = true;
        for(int i = 2; i < n; i+=2){
            if(arr[i] != arr[i+1]){
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