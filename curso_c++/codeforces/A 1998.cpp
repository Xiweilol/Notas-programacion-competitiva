// Autor: Mintwi
// Fecha: 2025-12-13

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int x,y,k;
        cin >> x >> y >> k;


        if(k == 1){
            cout << x << " " << y << "\n";
            continue;
        }

        int needx = abs(x * k);
        int needy = abs(y * k);

        vector <int> xs(k+1);
        vector <int> ys(k+1);

        int largo = k-1;

        for(int i = 1; i <= largo; i++){
            xs[i] = i;
            ys[i] = i-1;
        }
        int acumuladox = accumulate(xs.begin(),xs.end(),0);
        int acumuladoy = accumulate(ys.begin(),ys.end(),0);

        xs[k] = needx - acumuladox;
        ys[k] = needy - acumuladoy;

        if(x < 0){
            for(int i = 1; i <= k; i++){
                xs[i] *= -1;
            }
        }

        if(y < 0){
            for(int i = 1; i <= k; i++){
                ys[i] *= -1;
            }
        }
        
        for(int i = 1; i <= k; i++){
            cout << xs[i] << " " << ys[i] << "\n";
        }

    }

    return 0;
}