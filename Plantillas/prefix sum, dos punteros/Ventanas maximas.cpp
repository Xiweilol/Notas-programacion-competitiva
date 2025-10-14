#include <bits/stdc++.h>

using namespace std;
// con set
vector <long long> slidingMaxSet(const vector<long long>& a,int k){
    set <long long> S;
    vector <long long> ans;
    //iteramos el tamaño del arreglo
    for(int i = 0; i < (int)a.size(); i++){
        S.insert(a[i]);

        //si ya estamos en la 4 posicion y necesitamos eliminar el primer elemento
        //ya que no esta en la ventana
        if(i >= k){
            //siempre garantiza que la el ultimo posicion que sale de la ventana
            //buscamos el iterador sobre el elemento
            auto it = S.find(a[i-k]);
            //lo borramos, para ajustar la ventana
            S.erase(it);
        }

        //aqui empieza a agregar la primera respuesta para el primer ventana
        if(i >= k - 1){
            ans.push_back(*S.rbegin());
        }
    }

    return ans;
}

//con la priority queue
vector<long long> slidingMaxPQ(const vector<long long>& a, int k){
    priority_queue<pair<long long,int>> pq; // (valor, idx)
    vector<long long> ans;
    for(int i = 0; i < (int)a.size(); ++i){
        pq.push({a[i], i});
        // cuando ya llenamos la primera ventana
        if(i >= k - 1){
            // limpiar top fuera de ventana
            int L = i - k + 1;
            while(!pq.empty() && pq.top().second < L) pq.pop();
            ans.push_back(pq.top().first);
        }
    }
    return ans;
}

//con el deque
vector<long long> slidingMaxDeque(const vector<long long>& a, int k){
    deque<int> dq; // guarda índices, valores en a[]
    vector<long long> ans;
    for(int i = 0; i < (int)a.size(); ++i){
        // mantener decreciente
        while(!dq.empty() && a[i] >= a[dq.back()]) dq.pop_back();
        dq.push_back(i);
        // expulsar fuera de ventana
        if(dq.front() <= i - k) dq.pop_front();
        // ya hay ventana completa
        if(i >= k - 1) ans.push_back(a[dq.front()]);
    }
    return ans;
}