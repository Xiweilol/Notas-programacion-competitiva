#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n; cin >> n;

    vector <int> arr(n);

    for(int i = 0; i < n ; ++i){
        cin >> arr[i];
    }

    int s, t; cin >> s >> t;

    //si esta en la misma estacion no tiene que mover
    if(s == t){
        cout << 0;
        return 0;
    }

    //queremos que recorra de sentido horario, entonces es necesario qeu s es menor que t
    if( s > t){
        swap(s,t);
    }

    int t1 = 0;

    //va ir corriendo de sentido horario, se va sumando pero no toca al tiempo del t a t +1
    for(int i = s - 1; i < t - 1; ++i){
        t1 += arr[i];
    }

    //para calcular el tiempo que resta del circulo, en este caso el tiempo del otro camino
    int total = 0;

    for(int i = 0; i < n; ++i){
        total += arr[i];
    }

    int t2 = total - t1;

    cout << min(t1,t2);
    return 0;
}