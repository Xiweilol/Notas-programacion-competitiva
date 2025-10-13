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

        unordered_set <int> cont;

        int ans = 0;
        //contamos alreves, si encuentra uno igualito, directamente los queresta tiene que ser borrado
        for(int i = n - 1; i >= 0; i--){
            if(cont.count(arr[i])){
                ans = i + 1;
                break;
            }

            cont.insert(arr[i]);
        }

        cout << ans << "\n";
    }

    return 0;
}