// Autor: Mintwi
// Fecha: 2025-10-29

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k; cin >> n >> k;

    vector <long long> arr(n);
        
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    set <long long> S;
    unordered_map <long long, int> freq;

    for(int i = 0; i < n; i++){
        long long temp1 = arr[i];
        freq[temp1]++;
        if(freq[temp1] == 1){
            S.insert(temp1);
        } else if(freq[temp1] > 1){
            S.erase(temp1);
        }
        if(i >= k){
            long long temp = arr[i-k]; 
            freq[temp]--;
            if(freq[temp] == 1){
                S.insert(temp);
            } else if(freq[temp] == 0){
                S.erase(temp);
                freq.erase(temp);
            }
        }

        if(i >= k - 1){
            if(S.empty()){
                cout << "Nothing\n";
            } else {
                cout << *S.rbegin() << "\n";
            }
        }

    }

    return 0;
}