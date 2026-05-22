// Autor: Mintwi
// Fecha: 2026-05-22
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll mod = 1000000000 + 7;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    /*MEJOR ME ECHO UN TIRO*/
    /*Solucion editorial*/
    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        vector <int> a(n+1);

        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }

        int k = 0;

        for(int i = 2; i <= n; i++){
            k = max(k,a[i-1]-a[i]);
        }

        for(int i = 1; i <= n; i++){
            if(a[i] < a[i-1]){
                a[i] += k;
            }
        }

        if(is_sorted(a.begin(),a.end())){
            cout << "YES";
        } else {
            cout << "NO";
        }

        cout << "\n";

    }

    return 0;
}