#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        int cnt = 2 * n;

        vector <vector<int>> arr(n+1, vector <int>(n+1,0));

        map <int, int> cont;

        int pos = 0;
        vector<char> seen(cnt + 1, 0);
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                int G; cin >> G;
                arr[i][j] = G;
                pos = i + j;
                cont[pos] = G;
            }
        }
        // checa con mex el faltante excepto 0
        
        for (auto& elem : cont) {
            if (elem.second >= 1 && elem.second <= cnt) {
                seen[elem.second] = 1;
            }
        }

        int mex = 1;
        while (mex <= cnt && seen[mex]){
            mex++;
        }
        
        cout << mex << " ";
        for(auto& elem : cont){
           cout << elem.second << " ";
        }
        cout << "\n";
    }

    return 0;
}