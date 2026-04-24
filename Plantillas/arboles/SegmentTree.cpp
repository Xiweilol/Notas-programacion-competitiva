// Autor: Mintwi
// Fecha: 2026-04-23
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll mod = 1000000000 + 7;

//necesitamos el arbol tmaaño 4 * n;

int n;

struct segmentTree{
    vector <int> st;
    int n;
    //constructor
    segmentTree(int n) : st (4 * n), n{n} {}

    //rango de consulta
    int query(int l, int r, int ni, int nl, int nr){
        //cuando esta totalmente dentro del rango
        if(l <= nl && nr <= r) return st[ni];
        //cuando se quede afuera del rango de consulta
        if(l > nr || r < nl) return 0;

        int mid = (nl + nr) / 2;

        int ansl = query(l,r,2*ni,nl,mid);
        int ansr = query(l,r,2*ni+1,mid+1,nr);

        return ansl + ansr;
    }

    void update(int i, int new_value,int ni,int nl, int nr){
        //cuando quede
        if(nr == nl){
            st[ni] = new_value;
            return;
        }

        int nm = (nl + nr) / 2;
        if(i <= nm){
            update(i,new_value,2*ni,nl,nm);
        } else{
            update(i,new_value,2*ni+1,nm+1,nr);
        }

        st[ni] = st[2*ni] +st[2*ni+1];

    }


};
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);


    return 0;
}