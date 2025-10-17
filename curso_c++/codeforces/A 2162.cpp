#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;cin >> t;

    while(t--){
        int n; cin >> n;

        int mayor = 0;
        for(int i = 0; i < n; i++){
            int a; cin >> a;
            mayor = max(mayor,a);
        }

    cout << mayor << "\n";
    }

    return 0;
}