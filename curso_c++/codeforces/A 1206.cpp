// Autor: Mintwi
// Fecha: 2025-12-12

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    vector <int> a(n);


    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int m; cin >> m;

    vector <int> b(m);

    for(int i = 0; i < m; i++){
        cin >> b[i];
    }

    sort(a.begin(),a.end());

    sort(b.begin(),b.end());

    cout << a[n-1] << " " << b[m-1] << "\n";

    return 0;
}