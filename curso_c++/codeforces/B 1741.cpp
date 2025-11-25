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
        for(int i = 1; i <= n; i++){
            
            arr[i] = temp;
            temp--;
            
        }

        for(int i = 1; i <= n; i++){
            if(arr[i] == i){
                swap(arr[i],arr[i+1]);
            }

            cout << arr[i] << " ";
        }


        cout << "\n";
    }

    return 0;
}