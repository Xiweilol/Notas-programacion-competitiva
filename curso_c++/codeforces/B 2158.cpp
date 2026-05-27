// Autor: Mintwi
// Fecha: 2026-05-26
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

      

      vector <int> freq(2*n+1,0);

      for(int i = 0; i < 2 * n; i++){
        int x; cin >> x;

        freq[x]++;
      }

      int impar = 0;
      int y = 0;
      int z = 0;

      for(int c : freq){
        if(c == 0) continue;

        if(c & 1){
            impar++;
        } else if(c % 4 == 2){
            y++;
        } else{
            z++;
        }
      }
      
      // los que son impares idrectamente se suma a la respuesta
      //tambien los que son multiplos de 4 + 2
      //cuando es multiplos de 4 nos genera un problema, genera un desbalance de 2 numeros

      int ans = impar + 2 * y + 2 * z;

      if(impar == 0 && z & 1){
        ans -= 2;
      }

      cout << ans << "\n";

    }

    return 0;
}