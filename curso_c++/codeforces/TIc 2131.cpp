#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;
        vector<int> ans1(n);
        vector <int> ans2(n);

        for(int i = 0; i < n; i++){
            int s; cin >> s;
            //k - s%k, es el opuesto aditivo de la operacion, no cambia eso
            ans1[i] = min(s%k,(k -(s%k))%k);
        }

        for(int i = 0; i < n; i++){
            int T; cin >> T;
            ans2[i] = min(T%k,(k -(T%k))%k);
        }

        sort(ans1.begin(),ans1.end());
        sort(ans2.begin(),ans2.end());
        bool pas = true;
        for(int i = 0; i < n; i++){
            if(ans1[i] != ans2[i]){
                pas = false;
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