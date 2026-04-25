#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    string s;
    cin >> s;

    vector<ll> pesos;
    string signos = "";

    ll actual = a[0];

    for(int i = 0; i < n - 1; i++){
        if(s[i] == '='){
            actual += a[i + 1];
        } else {
            pesos.push_back(actual);
            signos += s[i];
            actual = a[i + 1];
        }
    }

    pesos.push_back(actual);

    int m = pesos.size();

    vector<ll> ans(m, 1);

    // Pasada izquierda a derecha para los <
    for(int i = 0; i < m - 1; i++){
        if(signos[i] == '<'){
            ans[i + 1] = max(ans[i + 1], ans[i] + 1);
        }
    }

    // Pasada derecha a izquierda para los >
    for(int i = m - 2; i >= 0; i--){
        if(signos[i] == '>'){
            ans[i] = max(ans[i], ans[i + 1] + 1);
        }
    }

    vector<ll> ansFinal;

    int pos = 0;
    ansFinal.push_back(ans[pos]);

    for(int i = 0; i < n - 1; i++){
        if(s[i] != '='){
            pos++;
        }
        ansFinal.push_back(ans[pos]);
    }

    ll sum = 0;

    for(int i = 0; i < n; i++){
        sum += a[i] * ansFinal[i];
    }

    cout << sum << "\n";

    for(int i = 0; i < n; i++){
        cout << ansFinal[i] << " ";
    }

    return 0;
}