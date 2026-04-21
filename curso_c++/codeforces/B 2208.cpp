#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n,k,p,m;
        cin >> n >> k >> p >> m;

        multiset <int> sim;

        deque <int> a;
        pair<int,int> nump;
        for(int i = 0; i < n; i++){
            int ai; cin >> ai;

            if(i == p){
                nump = make_pair(ai,i);
            }
            if(i <= k){
                minHeap.push(ai); 
                continue;   
            }
            a.push_back(ai);
        }

        while(m > 0){
            //si esta dentro del rango de k, siempre me conviene tomarlo
            //una vez que lo tome, tenemos que restar
            if(nump.second <= k){

            }
        }
    }
}