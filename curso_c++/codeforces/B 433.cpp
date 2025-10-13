#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;

    vector <long long> arr(n);

    for(int i = 0; i < n ; i++){
        cin >> arr[i];
    }

    vector <long long> prefix1(n);
    // El primer elemento del prefix es igual al primer elemento de arr.
    // Esto porque la suma desde arr[0] hasta arr[0] es simplemente arr[0].
    prefix1[0] = arr[0];

    // Recorremos el arreglo desde la posición 1 hasta n-1.
    for(int i = 1; i < n; i++){
        // En cada posición i, guardamos la suma acumulada:
        // la suma hasta i es igual a la suma hasta i-1 más el elemento actual arr[i].
        prefix1[i] = prefix1[i-1] + arr[i];
    }
    vector <long long> prefix2(n);
    sort(arr.begin(),arr.end());

    prefix2[0] = arr[0];
    for(int i = 1; i <  n; i++){
        prefix2[i] = prefix2[i-1] + arr[i];
    }
    

    int m; cin >> m;
    for(int i = 0; i < m; i++){
        int type,l,r; cin >> type >> l >> r;
        l--;
        r--;
        if(type == 1){
            long long ans = (l == 0) ? prefix1[r] : prefix1[r] - prefix1[l-1];
            cout << ans << "\n";
        } else {
            long long ans = (l == 0) ? prefix2[r] : prefix2[r] - prefix2[l-1];
            cout << ans << "\n";
        }
    }

    return 0;
}