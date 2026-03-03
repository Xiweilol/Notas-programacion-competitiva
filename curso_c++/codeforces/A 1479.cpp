// Autor: Mintwi
// Fecha: 2026-03-02
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll mod = 1000000000 + 7;
const int maxn = 1e5 + 2;

int n;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    if(n == 1){
        cout << "! " << 1 << "\n";
        cout.flush();
        return 0;
    }
    vector <int> p(n+2,0);
    p[0] = INT_MAX;
    p[n+1] = INT_MAX;
    int ans = 0;
    int l = 1, r = n;
    while(l <= r){
        int mid = (l + r) / 2;
        //buscamos elementos  uno antes que mid y otro uno despues de mid

        cout << "? " << mid << "\n";
        cout.flush();
        cin >> p[mid];
        if(p[mid + 1] == 0){
            cout << "? " << mid + 1 << "\n";
            cout.flush();
            cin >> p[mid + 1];            
        }

        if(p[mid-1] == 0){
            cout << "? " << mid - 1 << "\n";
            cout.flush();
            cin >> p[mid - 1];            
        }

        //si ya es el pico, muere aqui
        if(p[mid] < p[mid+1] && p[mid] < p[mid-1]){
            ans = mid;
            break;
        }
        //si el mid no es pico
        //vamos a ver si fue el anterior del mid fue el minimo
        //si es asi lo movemos para la izquierda
        if(p[mid-1] < p[mid]){
            r = mid - 1;
            //si fuera el caso de que el antes es mas pequeño, entonces lo movemos a la derecha
        } else if(p[mid+1] < p[mid]){
            l = mid + 1;
        }
    }

    cout << "! " << ans << "\n";
    cout.flush();
    return 0;
}