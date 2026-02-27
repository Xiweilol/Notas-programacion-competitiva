#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e6 + 5;

vector <int> memo(maxn,INT_MAX);

//int arr[maxn];

vector <bool> visi(maxn,false);

int n;

int dp(int c){
    //caso base, cuando llega a 0, significa que ya no vamos a hacer nada
    if(c == 0) return 0;

    if(visi[c]) return memo[c];

    visi[c] = true;

    //convertimos en cadena a nuestro numero
    string s = to_string(c);

    //iterar las posiciones de las cadenas
    for(int i = 0; i < s.size(); i++){
        //por cada
        memo[c] = min(memo[c],dp(c - (s[i]-'0')) + 1);
    }

    return memo[c];

}
int main(){
    cin >> n;

    cout << dp(n) << "\n";
}