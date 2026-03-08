#include <iostream>
#include <cstdint>
#include <vector>
#include <map>
#include <algorithm>
#include <set>
#include <string>
using namespace std;

typedef struct NODO *nodito;
//parametro por valor
int lol(int x, int y){
   return x + y;
}

struct NODO{
   string miembro;
   int edad;
   float altura;
};


int main(){
   struct NODO p1;
   struct NODO *ptr;

   
   
   

   //bloque de memoria
   int arr[5] = {1,20,3,44,50};

   int ps = 10;
   int *p = &ps;
   int **pt = &p;
   //direccion de un apuntador
   cout << &p << "\n";

   //apuntador a apuntador
   cout << pt << "\n";

}
