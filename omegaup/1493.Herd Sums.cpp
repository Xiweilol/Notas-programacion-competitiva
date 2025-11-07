// Autor: Mintwi
// Fecha: 2025-11-06

#include <bits/stdc++.h>
using namespace std;

int main(){
    long long N;
    cin >> N;

    long long l = 1, r = 1;
    long long sum = 1;
    int ans = 0;

    while(l <= r && r <= N){
        if(sum == N){
            ans++;
            sum -= l;
            l++;
        } else if(sum < N){
            r++;
            sum += r;
        } else{
            sum -= l;
            l++;
        }
    }

    cout << ans << "\n";
    return 0;
}
