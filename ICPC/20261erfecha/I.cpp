#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){
    int n; cin >> n;

    vector <ll> a(n);

    for(int i = 0; i < n; i++) cin >> a[i];

    string s; cin >> s;

    string new_one = "";

    for(char c : s){
        if(c == '=') continue;

        new_one += c;
    
    }

    vector <int> ans(new_one.size());

    char temp;

    for(int i = 0; i < new_one.size(); i++){
        if((i == 0 && new_one[i] = '<')){
            
        }
    }
}

