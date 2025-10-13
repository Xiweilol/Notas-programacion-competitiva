#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        unordered_map <int,int> cont ={
        {0,0},
        {1,0},
        {2,0},
        {3,0},
        {5,0}
        };
        int round = 0;
        for(int i = 0; i < n; ++i){
            int a; cin >> a;
            cont[a]++;
            if(cont[0] >= 3 && cont[1] >= 1 && cont[3] >= 1 && cont[2] >= 2 && cont[5] >= 1 ){
                if(round == 0) round = i + 1;
            } 
        }

        cout << round << "\n";
    }

    return 0;
}