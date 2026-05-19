#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

const int maxn = 100005;

int longitud = 5;

void f(int i, int num){
    if(i == longitud){
        cout << "num: " << num << "\n";
        return;
    }
    f(i + 1, num + (1 << i));
    f(i + 1, num);
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    f(0, 0);
    return 0;
}