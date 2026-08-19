#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int caso = 1; caso <= T; caso++) {

        int a[1001], b[1001], c[1001];
        int freq[10001] = {0};

        int n1, n2, n3;

        cin >> n1;
        for (int i = 0; i < n1; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }

        cin >> n2;
        for (int i = 0; i < n2; i++) {
            cin >> b[i];
            freq[b[i]]++;
        }

        cin >> n3;
        for (int i = 0; i < n3; i++) {
            cin >> c[i];
            freq[c[i]]++;
        }

        int exclusivos1[1001];
        int exclusivos2[1001];
        int exclusivos3[1001];

        int cont1 = 0;
        int cont2 = 0;
        int cont3 = 0;

        // Amigo 1
        for (int i = 0; i < n1; i++) {
            if (freq[a[i]] == 1) {
                exclusivos1[cont1++] = a[i];
            }
        }

        // Amigo 2
        for (int i = 0; i < n2; i++) {
            if (freq[b[i]] == 1) {
                exclusivos2[cont2++] = b[i];
            }
        }

        // Amigo 3
        for (int i = 0; i < n3; i++) {
            if (freq[c[i]] == 1) {
                exclusivos3[cont3++] = c[i];
            }
        }

        // Ordenar los problemas exclusivos
        sort(exclusivos1, exclusivos1 + cont1);
        sort(exclusivos2, exclusivos2 + cont2);
        sort(exclusivos3, exclusivos3 + cont3);

        int mx = max(cont1, max(cont2, cont3));

        cout << "Case #" << caso << ":\n";

        if (cont1 == mx) {
            cout << "1 " << cont1;

            for (int i = 0; i < cont1; i++) {
                cout << " " << exclusivos1[i];
            }

            cout << "\n";
        }

        if (cont2 == mx) {
            cout << "2 " << cont2;

            for (int i = 0; i < cont2; i++) {
                cout << " " << exclusivos2[i];
            }

            cout << "\n";
        }

        if (cont3 == mx) {
            cout << "3 " << cont3;

            for (int i = 0; i < cont3; i++) {
                cout << " " << exclusivos3[i];
            }

            cout << "\n";
        }
    }
}