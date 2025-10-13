#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> vec;
    for (int i = 0; i < n - 1; ++i) {
        int num;
        cin >> num;
        vec.push_back(num);
    }

    sort(vec.begin(), vec.end());

    // caso 1: falta el primer número
    if (vec[0] != 1) {
        cout << 1 << endl;
        return 0;
    }

    // caso 2: falta en medio
    for (int j = 0; j < vec.size() - 1; j++) {
        if (vec[j + 1] != vec[j] + 1) {
            cout << vec[j] + 1 << endl;
            return 0;
        }
    }

    // caso 3: falta el último número
    cout << n << endl;
    return 0;
}
