// Autor: Mintwi
// Fecha: 2025-11-04

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        bool par = false;

        bool impar = false;

        vector <int> arr;
        for(int i = 0; i < n; i++){
            int a; cin >> a;

            arr.push_back(a);
            if(a % 2 == 0){
                par = true;
            } else {
                impar = true;
            }
        }

        if(par && impar){
            sort(arr.begin(),arr.end());
        }

        for(auto& n : arr){
            cout << n << " ";
        }

        cout << "\n";
    }

    return 0;
}