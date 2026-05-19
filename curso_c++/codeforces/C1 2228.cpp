// Autor: Mintwi
// Fecha: 2026-05-18
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

const ll mod = 1000000000 + 7;
int d1;
int d2;
unsigned long long ans;
unsigned long long a;
void generar(int pos,int len,unsigned long long s){
    //ya generamos un numero con digito que queremos
    if(pos == len){
        if(a > s){
            ans = min(ans,a-s);
        } else {
            ans = min(ans,s-a);
        }
        return;
    }

    generar(pos+1,len,s * 10 + d1);
    generar(pos+1,len,s * 10 + d2);

}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        cin >> a;
        int n; cin >> n;

        cin >> d1 >> d2;

        ans = LLONG_MAX;

        int largo = to_string(a).size();
        
        for(int i = max(1,largo-1); i <= largo+1; i++){
            generar(0,i,0);
        }

        cout << ans << "\n";
    }

    return 0;
}