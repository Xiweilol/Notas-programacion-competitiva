// Autor: Mintwi
// Fecha: 2026-01-25

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N; cin >> N;

    int num = (1 << N);

    int num2 = 2 * N;

    cout << num - num2 << "\n";

    return 0;
}