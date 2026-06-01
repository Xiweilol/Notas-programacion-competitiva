// Autor: Mintwi
// Fecha: 2026-05-31
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll mod = 1000000000 + 7;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        vector <int> a(n);
        set <int> s;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            s.insert(a[i]);
        }

        if(s.size() == 1){
            cout << "NO\n";
            continue;
        }
        sort(a.rbegin(),a.rend());

        int temp = a[0];
        

            cout << "YES\n";
            for(int i = 0; i < n; i++){
                if(a[i] == temp) continue;
                swap(a[0],a[i]);
                break;
            }

            for(int i = 0; i < n; i++){
                cout << a[i] << " ";
            }
            cout << "\n";
        
    }

    return 0;
}