// Autor: Mintwi
// Fecha: 2025-11-02

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    vector <int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int sum = 0;

    for(int i = 1; i < n; i++){
        sum += arr[i-1] * arr[i];
    }

    cout << sum << "\n";
    return 0;
}