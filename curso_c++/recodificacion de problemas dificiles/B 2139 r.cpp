#include <bits/stdc++.h>

using namespace std;
//solucion propia

int main(){
    int t; cin >> t;

    while(t--){
        int n,m; cin >> n >> m;
        vector <int>cont(n);
        long long result = 0;
        for(int i = 0; i < n; i++){
            cin >> cont[i];
        }
        //ordenar de mayor a menor
        sort(cont.rbegin(),cont.rend());

        for(int i = 0; i < n; i++){
            //max porque no siempre alcanza a visitar los hornos en m segundos
            result += 1ll * cont[i] * max(0,m-i);

        }

        cout << result << "\n";
    }
    return 0;
}