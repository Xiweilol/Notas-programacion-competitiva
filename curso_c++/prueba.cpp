#include <iostream>
#include <cstdint>
#include <vector>
#include <map>
#include <algorithm>
typedef long long ll;
using namespace std;
int main(void)
{ 

   int n; cin >> n;
   int c,d; cin >> c >> d;
   vector <ll> a(n * n);

   for(int i = 0; i < n * n; i++){
      cin >> a[i];
   }

   sort(a.begin(),a.end());

   for(int i = 0; i < n; i++){
      cout << a[i] << " ";
   }

}
