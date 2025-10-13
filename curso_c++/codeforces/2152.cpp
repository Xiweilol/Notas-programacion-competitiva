#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    if (!(cin >> t)) return 0;
    while (t--) {
        long long n, rK, cK, rD, cD;
        cin >> n >> rK >> cK >> rD >> cD;

        //se calcula sobre doran cuanto tarda en mover hasta donde puede mover k
        long long vertical = 0;
        //si rk esta arriba del d, puede mover hacia la fila 0
        if (rK < rD) vertical = rD;
        //esta abajo, necesitamos restar el total menos donde esta doran
        else if (rK > rD) vertical = n - rD;

        long long horizontal = 0;
        if (cK < cD) horizontal = cD;
        else if (cK > cD) horizontal = n - cD;

        cout << max(vertical, horizontal) << "\n";
    }
    return 0;
}