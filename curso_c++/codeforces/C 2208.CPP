// Autor: Mintwi
// Fecha: 2026-04-30
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll mod = 1000000000 + 7;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        vector <long double> c(n);
        vector <long double> p(n);

        for(int i = 0; i < n; i++){
            double ci,pi; cin >> ci >> pi;

            c[i] = ci;
            p[i] = pi;
        }

        long double ans = 0;

        for(int i = n-1; i >= 0; i--){
            //tomar o no tomar, depende de que si es mas grande tomandolo
            ans = max(ans,c[i] + ans*(1- (p[i]/100.0)));
        }

        cout << fixed << setprecision(6) << ans << "\n";
    }

    return 0;
}