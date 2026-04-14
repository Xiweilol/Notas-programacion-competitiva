// Autor: Mintwi
// Fecha: 2026-04-14
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll mod = 1000000000 + 7;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,x; cin >> n >> x;

    vector <int> a(n);

    int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }

    int need = n -1;

    if(sum + need == x){
        cout << "YES";
    } else{
        cout << "NO";
    }

    cout << "\n";


    return 0;
}