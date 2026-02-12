#include <iostream>
#include <cstdint>
#include <vector>
#include <map>
#include <algorithm>
typedef long long ll;
using namespace std;
int main(void)
{ 

   vector <pair<int,int>> a ={
      {1,1},{2,2},{3,3},{4,4},{0,5},{1,6},{2,7}
      //{1,1},{1,2}
   };

   int temp = 12312412;
   sort(a.begin(),a.end(),[](const auto& a, const auto& b){
      if(a.first == b.first){
         return a.second < b.second;
      }
      return a.first > b.first;
   });

   // sort(a.begin(),a.end());
    cout << "Orden ascendiente: \n";
    for(auto [k,v] : a){
       cout << "llave: " << k << " Valor: " << v <<"\n";
   }

   // sort(a.rbegin(),a.rend());

   // cout << "Orden descendiente: \n";

   // for(auto [k,v] : a){
   //    cout << "llave: " << k << " Valor: " << v <<"\n";
   // }
}
