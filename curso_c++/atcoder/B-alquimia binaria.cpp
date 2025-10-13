#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; 
    cin >> n;

    // 1-based y sólo triangular inferior
    vector<vector<int>> a(n + 1, vector<int>(n + 1));

    // lee SOLO la triangular inferior: fila i tiene i elementos
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            cin >> a[i][j];
        }
    }

    int result = 1; // empieza en el elemento 1
    for (int i = 1; i <= n; ++i) {
        // usa siempre (mayor, menor)
        if (result >= i) result = a[result][i];
        else             result = a[i][result];
    }

    cout << result;
    return 0;
}
