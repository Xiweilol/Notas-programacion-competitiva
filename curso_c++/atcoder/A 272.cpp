#include <bits/stdc++.h>

using namespace std;

int main(){
   int n; cin >> n;
   
   int sum = 0;

   while(n--){
        int a; cin >> a;
        sum += a;
   }

   cout << sum << "\n";

   return 0;
}