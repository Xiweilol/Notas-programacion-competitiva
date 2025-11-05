// Autor: Mintwi
// Fecha: 2025-11-05

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    set <int> S;
    for(int i = 0; i < n;i++){
        int a; cin >> a;
        S.insert(a);
    }

    if(S.size() == 1){
        cout << "NO\n";
        return 0;
    }
    vector <int>arr(S.begin(),S.end()); 

    cout << arr[1] << "\n";

    return 0;
}