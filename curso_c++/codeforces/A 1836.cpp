// Autor: Mintwi
// Fecha: 2025-11-28

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        set <int> S;
        map <int,int> freq;
        for(int i = 0; i < n; i++){
            int l; cin >> l;

            S.insert(l);

            freq[l]++;
        }

        vector <int> arr(S.begin(),S.end());

        bool pas = true;


        if(arr.size() == 1 || freq.find(0) == freq.end()){
            if(arr[0] == 0){
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }

            continue;
        }
        for(int i = 1; i < arr.size(); i++){
            if((arr[i] != arr[i-1]+1) || freq[arr[i]] > freq[arr[i-1]]){
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