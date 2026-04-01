// Autor: Mintwi
// Fecha: 2026-04-01
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll mod = 1000000000 + 7;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    while(cin >> n){
        vector <int> a(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        set <int> freq;

        bool ok = true;

        for(int i = 1; i < n; i++){
            //menos el actual
            int temp = abs(a[i-1] - a[i]);
            if(temp >= n || freq.count(temp)){
                ok = false;
                break;
            }

            freq.insert(temp);
        }

        cout << (ok ? "Jolly" : "Not jolly") << "\n";        
    }

    return 0;
}