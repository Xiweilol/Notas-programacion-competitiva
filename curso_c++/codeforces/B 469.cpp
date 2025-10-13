#include <bits/stdc++.h>
using namespace std;

// Función que revisa si dos intervalos [l1, r1] y [l2, r2] se solapan
bool overlap(int l1, int r1, int l2, int r2) {
    return (l1 <= r2) && (l2 <= r1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int p, q, l, r;
    cin >> p >> q >> l >> r;

    vector<pair<int,int>> Z(p);
    vector<pair<int,int>> X(q); 

    for (int i = 0; i < p; i++) {
        cin >> Z[i].first >> Z[i].second;
    }

    for (int j = 0; j < q; j++) {
        cin >> X[j].first >> X[j].second;
    }

    int countValid = 0;

    for (int t = l; t <= r; t++) {
        bool valido = false;

       
        for (auto [c, d] : X) {
            int c_shift = c + t;
            int d_shift = d + t;

            for (auto [a, b] : Z) {
                if (overlap(c_shift, d_shift, a, b)) {
                    valido = true;
                    break; 
                }
            }
            if (valido) break;
        }

        if (valido) countValid++;
    }

    cout << countValid << "\n";
    return 0;
}
