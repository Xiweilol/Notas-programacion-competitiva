#include <bits/stdc++.h>

using namespace std;

bool ok(int m,int n,int k){
    //el tiempo minimo que nos queda para resolver problema
    int t = 240 - k;
    //cantidad de tiempo que neceitamos a resolver problemas
    int need = 5 *(m*(m + 1) / 2);
    // es valido si no pasa de tiempo que quedamos
    return need <= t && m <= n;
}

int main(){
    int n,k; cin >> n >> k;

    //inicia desde 0 problemas hasta n problemas
    int lo = 0, hi = n,ans = 0;

    while(lo <= hi){
        //para casos grandes
        //int mid = lo + (hi - lo) / 2;

        //para casos pequeños
        int mid = (lo + hi) / 2;

        if(ok(mid,n,k)){
            ans = mid;

            //intentarlo hacer mas grande, ya que estamso en lasttrue
            lo = mid + 1;
        } else {
            //si no puede, se reduce para el resultado
            hi = mid - 1;
        }
    }

    cout << ans << "\n";

    return 0;
}