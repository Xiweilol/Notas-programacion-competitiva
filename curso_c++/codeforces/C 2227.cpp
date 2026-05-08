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
    while(t--){
        int n; cin >> n;

        vector <int> asix;
        vector <int> ados;
        vector <int> atres;
        vector <int> mid;

        for(int i = 0; i < n; i++){
            int ai; cin >> ai;

            if(ai % 6 == 0){
                asix.push_back(ai);
            } else if( ai % 2 == 0){
                ados.push_back(ai);
            } else if(ai % 3 == 0){
                atres.push_back(ai);
            } else{
                mid.push_back(ai);
            }
        }

        asix.insert(asix.begin(),ados.begin(),ados.end());
        asix.insert(asix.begin(),mid.begin(),mid.end());
        asix.insert(asix.begin(),atres.begin(),atres.end());

        for(int num : asix){
            cout << num << " ";
        }

        cout << "\n";
    }

    return 0;
}