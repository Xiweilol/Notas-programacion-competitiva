#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        string s; cin >> s;

        transform(s.begin(),s.end(),s.begin(),::tolower);

        string need = "meow";
        s.erase(unique(s.begin(),s.end()),s.end());
    
        
        
        cout <<(need == s ? "YES" : "NO") << "\n";
    }
}