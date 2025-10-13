#include <bits/stdc++.h>

using namespace std;
/*Ocupo mas caso de prueba xd*/
int main(){
    int n,m,a; cin >> n >> m >> a;

    long long result = 0;

    if(a > n && a > m){
        cout << 1;
        return 0;
    }

    long long rn = (n / a) + (n % a != 0);
    long long rm = (m / a) + (m % a != 0);

    result = rn * rm;

    cout << result;
    return 0;
}
