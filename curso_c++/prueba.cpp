#include <iostream>
#include <cstdint>
#include <vector>
#include <map>

typedef long long ll;
using namespace std;
int main(void)
{ 

   int n; cin >> n;

   map <int,int> freq;

   for(int i = 0; i < n; i++){
      int a; cin >> a;
      freq[a]++;
   }

   for(auto [k,v] : freq){
      cout << v << " ";
   }

}
