#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){

        int n; cin >> n;

        vector <int> a(n);
        vector <int> b(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        for(int i = 0; i < n; i++){
            cin >> b[i];
        }

        //llevamos un diferencia
        //por cada elemento quitado, vamos a ir contar el siguiente
        int diff = 0;
        int ans = 0;

        for(int i = 0; i < n; i++){
            //aqui hace lo mencionado anterior mente
            if(a[i-diff] > b[i]){
                diff++;
                ans++;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}