#include <bits/stdc++.h>
using namespace std;

int getXorRange(const vector<int>& px, int l, int r) {
    // Si l == 0, solo se usa px[r]; si no, se usa px[r] ^ px[l-1]
    return px[r] ^ (l ? px[l - 1] : 0);
}

int main() {
    vector<int> arr = {2, 4, 5, 7};
    int n = arr.size();

    // Construimos prefix
    vector<int> prefix(n);
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i-1] + arr[i];
    }

    // Consulta de rango L=1, R=3
    int L = 1, R = 3;
    int suma = (L == 0) ? prefix[R] : prefix[R] - prefix[L-1];

    cout << "Suma de arr[1..3] = " << suma << endl;
}
