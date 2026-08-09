#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;

    while(t--){
        int N; cin >> N;

        int P; cin >> P;

        vector <bool> huelgas(N+1,false);

        for(int i = 0; i < P; i++){
            int h; cin >> h;

            for(int i = 0; i <= N; i += h){
                if(i % 7 == 0 || i % 7 == 6) continue;

                huelgas[i] = true;
            }
        }

        int ans = 0;
        for(bool lol : huelgas){
            if(lol) ans++;
        }

        cout << ans << "\n";
    }
}