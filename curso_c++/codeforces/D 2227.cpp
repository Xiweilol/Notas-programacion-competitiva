// Autor: Mintwi
// Fecha: 2026-05-06
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll mod = 1000000000 + 7;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){awdawda
        int n; cin >> n;

        vector <int> a(2*n);

        int idxfirst = -1;
        int idxsecond = -1;
        for(int i = 0; i < 2 * n; i++){
            cin >> a[i];
            if(idxfirst == -1 && a[i] == 0){
                idxfirst = i;
            } else if(a[i] == 0){
                idxsecond = i;
            }
        }

        //expandimos hacia dentro
        int l = 



        
    }

    return 0;
}