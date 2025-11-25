// Autor: Mintwi
// Fecha: 2025-11-25

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

        if(n == 1 || n == 3){
            cout << -1 << "\n";
            continue;
        }
        int temp = n;
        int pos = 0;
        for(int i = 1; i <= n; i++){
            
            arr[i] = temp;
            temp--;
            if(temp == i+1){
                pos = temp;
            }
        }   

        if(n & 1){
            reverse(arr.begin() + pos,arr.end());
        }

        for(int i = 1; i <= n; i++){
            cout << arr[i] << " ";
        }

        cout << "\n";
    }

    return 0;
}