#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,q; cin >> n >> q;

    vector <long long> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    vector <int> diff(n+1,0);

    while(q--){
        int l,r; cin >> l >> r;
        //convertirlo en base 0;
        l--; r--;

        diff[l] += 1;
        if(r + 1 < n){
            diff[r + 1] -= 1;
        }
    }

    vector <long long> freq(n,0);
    long long acumulado = 0;
    //utilizar prefix sum para sumar real a esos rangos marcados
    for(int i = 0; i < n; i++){
        acumulado += diff[i];
        freq[i] = acumulado;
    }

    sort(arr.rbegin(),arr.rend());
    sort(freq.rbegin(),freq.rend());

    long long ans = 0;
    for(int i = 0; i < n; i++){
        ans += arr[i] * freq[i];
    }

    cout << ans << "\n";

    return 0;
}