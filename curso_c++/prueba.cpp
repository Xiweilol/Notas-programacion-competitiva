#include <iostream>
#include <cstdint>
#include <vector>
typedef long long ll;
using namespace std;
int main(void)
{ 

   vector <int> a = {3,11,3,7};

   int len = a.size();
   for(int i = 0; i < a.size(); i++){
      cout << (a[i] & a[len-1]) << "\n";
      len--;
   }

}
