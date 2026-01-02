// Autor: Mintwi
// Fecha: 2026-01-02

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;

        vector <int> a(n);

        for(int i = 0; i < n; i++){
            a[i] = n - i;
        }
        //revertir los ultimos k + 1 para lograr k emociones
        reverse(a.end()- k - 1, a.end());

        for(int i = 0; i < n; i++){
            cout << a[i] << " ";
        }

        cout << "\n";
    }

    return 0;
}