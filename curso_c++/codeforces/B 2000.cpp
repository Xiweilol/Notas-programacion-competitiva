#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        vector <int> arr(n);

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        int izquierda,derecha;

        izquierda = arr[0]; derecha = arr[0];
        bool pas = true;
        for(int i = 1; i < n ; i++){
            if(arr[i] - 1 == izquierda){
                izquierda = arr[i];
            } else if(arr[i] + 1 == derecha){
                derecha = arr[i];
            } else {
                pas = false;
                break;
            }
        }

        if(pas){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}