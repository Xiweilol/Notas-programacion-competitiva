#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int n; cin >> n;
    map <string,int> freq;
    while (n--){
        int x; cin >> x;
        string firsts = "";
        while (x--){
            string s;
            cin >> s;
            firsts += s[0];
        }

        freq[firsts]++;
    }
    int cnt=0;
    for()
    cout << cnt;
    return 0;
}