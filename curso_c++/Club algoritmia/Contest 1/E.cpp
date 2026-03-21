#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
    int n; cin >> n;

    vector <int> a(n);
    bool ok = true;
    for(int i = 0; i < n; i++){
        cin >> a[i];

        if(a[i] == 1){
            ok = false;
        }
    }
    
    if(ok){
        cout << 1 << "\n";
    } else {
        sort(a.begin(),a.end());

        ll act = 2;

        for(int i = 1; i < n; i++){
            //llevo la suma, si la suma que llevo es menor que lo que tengo en el arreglo, ya que tengo 1 de mas
            if(act < a[i]) break;

            act += a[i];
        }

        cout << act << "\n";
    }

    
}