// Autor: Mintwi
// Fecha: 2025-10-18

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        long long n,k; cin >> n >> k;

        unordered_map <int,int> freq;

        for(int i = 0; i < n; i++){
            int a; cin >> a;
            freq[a]++;
        }

        long long ans = 0;

        for(auto& p : freq){
            int x = p.first;
            int y = k - x;

            if(freq.count(y)){

                if(x == y){
                    ans += freq[x] / 2;
                } else {
                    //sacamos minimo, ya que depende del misnimo se forma los pares
                    long long con = min(freq[x],freq[y]);
                    ans += con;
                    freq[x] -= con;
                    freq[y] -= con;
                }
            }
        }

        cout << ans << "\n";
    }

    return 0;
}