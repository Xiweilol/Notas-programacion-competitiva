#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        /*Elegir todos los casos para al final sumarlo y sacar el mas grande, yno ir uno por uno*/
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        int cntOdd  = (n + 1) / 2; 
        int cntEven = n / 2;       

        int bestOdd  = INT_MIN; 
        int bestEven = INT_MIN;

        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0) bestOdd  = max(bestOdd,  a[i]);
            else            bestEven = max(bestEven, a[i]);
        }

        int scoreOdd  = cntOdd  + bestOdd;
        int scoreEven = cntEven + bestEven;
        cout << max(scoreOdd, scoreEven) << "\n";
    }
    return 0;
}
