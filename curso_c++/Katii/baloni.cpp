#include <bits/stdc++.h>

typedef long long ll;

using namespace std;


const int MILLON = 1e6 + 5;
int main(){
    int N; cin >> N;

    vector <int> bolsa(MILLON,0);
    
    int ans = 0;
    while(N--){
        int h; cin >> h;

        // si existe una flecha de esta altura
        if(bolsa[h] > 0){
            bolsa[h]--;
            bolsa[h-1]++;
        } else {
            ans++;
            bolsa[h-1]++;
        }
    }

    cout << ans << "\n";
}