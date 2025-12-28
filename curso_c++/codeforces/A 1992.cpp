// Autor: Mintwi
// Fecha: 2025-12-28

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int a,b,c; cin >> a >> b >> c;

        vector <int> arr = {a,b,c};

        sort(arr.begin(),arr.end());
        
        for(int i = 1; i <= 5; i++){
            arr[0] += 1;
            sort(arr.begin(),arr.end());
        }

        cout << arr[0] * arr[1] * arr[2] << "\n";
    }

    return 0;
}