// Autor: Mintwi
// Fecha: 2025-12-09

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        vector <int> a(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        
        while(!a.empty() && a.back() == 0){
            a.pop_back();
        }

        reverse(a.begin(),a.end());

        while(!a.empty() && a.back() == 0){
            a.pop_back();
        }

        reverse(a.begin(),a.end());

        if(a.empty()){
            cout << 0 << "\n";
            continue;
        }

        bool pas = true;

        for(int i = 0; i < a.size(); i++){
            if(a[i] == 0){
                pas = false;
                break;
            }
        }

        if(pas){
            cout << 1 << "\n";
        } else {
            cout << 2 << "\n";
        }

    }

    return 0;
}