// Autor: Mintwi
// Fecha: 2026-01-25

#include <bits/stdc++.h>
typedef long long ll;
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

        int l = 0, r = 0;

        int temp = n;
        while(l < n && a[l] == temp){
            l++;
            temp--;
        }

        for(int i = l; i < n; i++){
            if(a[i] == temp){
                r = i;
            }
        }

        reverse(a.begin() + l, a.begin() + r + 1);

        for(auto i : a){
            cout << i << " ";
        }

        cout << "\n";
    }

    return 0;
}