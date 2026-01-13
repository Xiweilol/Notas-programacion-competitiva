// Autor: Mintwi
// Fecha: 2026-01-12

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;


/*Solamente existe 3 opcioens
0 = cuando todos estan 0 ya
1, cuando solo existe un suarreglos contiguos
2.- cuando hay mas de un suarreglos contiguos diferentes de 0*/
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        vector <int> arr(n);

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        while(!arr.empty() && arr.back() == 0){
            arr.pop_back();
        }

        if(arr.empty()){
            cout << 0 << "\n";
            continue;
        }

        reverse(arr.begin(),arr.end());

        while(arr.back() == 0){
            arr.pop_back();
        }

        int len = arr.size();
        bool ok = true;
        for(int i = 0; i < len; i++){
            if(arr[i] == 0){
                ok = false;
                break;
            }
        }

        if(ok){
            cout << 1 << "\n";
        } else {
            cout << 2 << "\n";
        }


    }

    return 0;
}