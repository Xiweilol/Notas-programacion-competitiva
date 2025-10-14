#include <bits/stdc++.h>
using namespace std;

//priority queue
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

//set
vector<long long> slidingMaxMultiset(const vector<long long>& a, int k){
    multiset<long long> S;
    vector<long long> ans;
    for(int i = 0; i < (int)a.size(); ++i){
        S.insert(a[i]);
        if(i >= k) {
            // saca el que salió de la ventana
            auto it = S.find(a[i - k]);
            S.erase(it); // borra una ocurrencia
        }
        if(i >= k - 1){
            ans.push_back(*S.rbegin()); // máximo
        }
    }
    return ans;
}

//deque

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
