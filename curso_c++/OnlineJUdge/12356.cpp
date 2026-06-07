#include <bits/stdc++.h>

typedef long long ll;


using namespace std;


int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int s,b;
    while(cin>>s >>b){
        if(s == 0 && b == 0) break;
        vector <int> izq(s+1);
        vector <int> der(s+1);
        izq[1] = -1;
        //for para la izquierda
        der[s] = -1;

        for(int i = 2; i <= s; i++){
            izq[i] = i-1;
        }

        for(int i = s-1; i >= 1; i--){
            der[i] = i+1;
        }

        while(b--){
            int l, r; cin >> l >> r;

            int left = izq[l];
            int right = der[r];
            if(left == -1 || left == 0){
                cout << "* ";
            } else{
                cout << left << " ";
            }

            if(right == -1 || right == 0){
                cout << "*";
            } else{
                cout << right;
            }

            cout << "\n";


            if(right != -1) izq[right] = left;
            if(left != -1) der[left] = right;
            
        }

        cout << "-\n";

    }
}
