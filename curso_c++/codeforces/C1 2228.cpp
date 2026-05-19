// Autor: Mintwi
// Fecha: 2026-05-18
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll mod = 1000000000 + 7;
char d1;
char d2;
ll ans;
ll a;
void generar(int pos,int len,string s){
    //ya generamos un numero con digito que queremos
    if(pos == len){
        ll b = stoll(s);
        ans = min(ans,abs(a-b));
        return;
    }

    generar(pos+1,len,s+d1);
    generar(pos+1,len,s+d2);

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
            generar(0,i,"");
        }

        cout << ans << "\n";
    }

    return 0;
}