// Autor: Mintwi
// Fecha: 2025-11-20

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;

        vector<int> a(n);
        vector<int> freq(n + 1, 0);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }
        vector<int> bandera(n, 0);
        bool hayUnicos = false;
        for (int i = 0; i < n; i++) {
            if (freq[a[i]] == 1) {
                bandera[i] = 1;
                hayUnicos = true;
            }
        }

        if (!hayUnicos) {
            cout << 0 << "\n";
            continue;
        }

        int mejorLargo = 0;
        int ansl = 0, ansr = -1; 

        int i = 0;
        while (i < n) {
            if (bandera[i] == 0) {
                i++;
                continue;
            }

            int l = i;
            while (i < n && bandera[i] == 1) {
                i++;
            }
            int r = i - 1;
            int largo = r - l + 1;

            if (largo > mejorLargo) {
                mejorLargo = largo;
                ansl = l;
                ansr = r;
            }
        }


        cout << ansl + 1 << " " << ansr + 1 << "\n";
    }

    return 0;
}
