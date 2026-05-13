// Autor: Mintwi
// Fecha: 2026-05-13
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

        vector <ll> a(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        //ya que sea el dios queira
        sort(a.rbegin(),a.rend());

        set <ll> mrd(a.begin(),a.end());

        deque <ll> nose;
        for(auto num : mrd){
            nose.push_back(num);
        }

        nose.push_front(0);
        int len = nose.size()-1;
        
        swap(nose[0],nose[len]);
        ll mex = 0;
        set <ll> aaaa;

        ll siono = 0;
        
        for(int i = 0; i < len-1;i++){
            aaaa.insert(nose[i]);
            while(aaaa.count(mex)) mex++;

            siono += mex + a[0];
        }

        ll sobra = n - len;

        if(sobra != 0){
            siono += (mex + a[0]) * sobra;
        }

        cout << siono << "\n";


    }

    return 0;
}