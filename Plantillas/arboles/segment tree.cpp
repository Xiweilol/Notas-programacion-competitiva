// Autor: Mintwi
// Fecha: 2025-12-08

#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 5;
//el segment tree siemre tiene tamaño de 4 * N
int values[N], st[4*N];

//funcion build 
//va desde [0, n-1]

void build(int l,int r, int i, vector <int> &values){
    //cuando llegue al final, osea las hojas
    // el numero de rangos va ser iguales
    if(l == r){
        st[i] = values[l];
        return;
    }
    //aqui estamos pensando la division de nodos
    int m = (l + r) / 2;

    //recursividad para el nodo derecho y nodo izquierdo
    //izquierda, por lo tanto para sacar
    build(l,m,2*i+1,values);
    build(m+1,r,2*i+2,values);
    st[i] = st[2*i+1] + st[2*i+2]; // construccion de nodos padres, siendo la suma de sus nodos hijos se parando en 2;

}

void update(int l, int r, int idx, int x, int i){
    if(l == r){
        //cuando ya llega las hojas, hace la suma directo
        st[i] += x;
        return;
    }

    int m =(l + r) / 2;
    //el idx es el indice a actualizar
    if(idx <= m) update(l,m,idx,x,2*i+1);
    else update(m+1,r,idx,x,2*i+2);

    st[i] = st[2*i+1] + st[2*i+2];
}

int query(int l, int r, int a,int b, int i){
    if(a > r || b < l) return 0;
    if(a <= l & r <= b) return st[i];
    int m = (l + r) / 2;

    return query(l,m,a,b,2*i*+1) + query(m+1,r,a,b,2*i+2);
}


int main(){
    vector <int> v = {3,1,5,4,7,0,1,3};
    int n = v.size();
    build(0,n-1,0,v);

    cout << query(0,n-1,2,4,0) << "\n";
}
