#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;

    while(t--){
        int n,k,p,m;
        cin >> n >> k >> p >> m;

        p--;
        k--;
        deque <int> a;
        pair<int,int> nump;
        deque <int> as;
        for(int i = 0; i < n; i++){
            int ai; cin >> ai;

            if(i == p){
                nump = make_pair(ai,i);
            }
            if(i <= k){
                as.push_back(ai); 
                continue;   
            }
            a.push_back(ai);
        }
        if(k+1 >= n){
            cout << (m / as[p]) << "\n";
            continue;
        }
        int ans = 0;
        for(int i = 0; i <= k; i++){
            if(as[i] == nump.first && i == nump.second){
                ans++;

                as.erase(as.begin() + i);    
            
                as.push_back(a.front());
                a.push_back(nump.first);
                a.pop_front();
                
                nump.second = a.size() + k;
                m -= nump.first;            
                //cout << "entro el primer for, con valor de " << nump.first << " y indice actualizado: " << nump.second << "\n";
                //cout << "todo salio correcto en este for\n";
                break;

            }

            
        }
       
        while(m > 0){
            //si esta dentro del rango de k, siempre me conviene tomarlo
            //una vez que lo tome, tenemos que restar
            if(nump.second == k && m >= nump.first){
                ans++;
                //problema esta aqui, de como esta eliminando
                as.pop_back();
                
                as.push_back(a.front());
                a.pop_front();
                a.push_back(nump.first);
                nump.second = a.size() + k;
                m -= nump.first;
            } else{
                sort(as.begin(),as.end());
                //cout << "esta bien que entre cuando nump.second > k, valor de as.front\n";
                // for(int i = 0; i <= k; i++){
                //     cout << as[i] << " ";
                // }
                //cout << "\n";
                m -= as.front();
                a.push_back(as.front());
                as.push_back(a.front());
                as.pop_front();
                a.pop_front();
                nump.second -= 1;
            }
        }

        cout << ans << "\n";
    }
}