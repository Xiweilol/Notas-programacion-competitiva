#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    int cont = 1;

    while (cin >> n && n != 0) {
        vector<int> arr(n);
        int sum = 0;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }

        int mid = sum / n;
        int ans = 0;

        // Sumamos cuántos bloques sobran en las torres más altas
        for (int i = 0; i < n; i++) {
            if (arr[i] > mid) {
                ans += (arr[i] - mid);
            }
        }

        cout << "Set #" << cont << "\n";
        cout << "The minimum number of moves is " << ans << ".\n\n"; // Se incluye el punto final y doble salto de línea

        cont++;
    }

    return 0;
}