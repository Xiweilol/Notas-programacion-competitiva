#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <array>

using namespace std;

int main(){
    /*Vector, si milar a un arreglo dinámico
    acceso aleatorio rápido(O(1))
    se redimensiona*/
    vector <int> v = {10,20,30};
    v.push_back(40);


    /*deque, parecido al vector*/
    deque <int> dq = {1,2,3};
    dq.push_front(0);
    dq.push_back(4);

    /*list, lsita doblemente enlazada, insercion/ eliminacion
    en cualquier parte, es lento su tiempo de ejecucion es O(n)*/

    list <int> lst = {1,2,3};
    lst.push_front(0);
    lst.push_back(4);

    //version STL del arreglo fijo, tamaño fijo.
    array <int,3> arr = {1,2,3};

    

}