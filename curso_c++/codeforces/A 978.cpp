// Autor: Mintwi
// Fecha: 2026-01-21

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    vector <int> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    reverse(a.begin(),a.end());

    vector <int> ans;

    set <int> freq;

    for(int i = 0; i < n; i++){
        if(freq.count(a[i])){
            continue;
        }

        freq.insert(a[i]);
        ans.push_back(a[i]);
    }

    reverse(ans.begin(),ans.end());

    cout << ans.size() << "\n";
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }

    cout << "\n";


    return 0;
}