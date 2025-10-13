#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; 
    if(!(cin >> t)) return 0;
    while (t--) {
        long long k, a, b, x, y; 
        cin >> k >> a >> b >> x >> y;

        // Si no alcanza para ninguno, 0
        if (k < a && k < b) {
            cout << 0 << "\n";
            continue;
        }

        long long ans = 0;

        // 1) Cocinamos mientras alcance para ambos, usando el que cae menos
        long long need_both = max(a, b);
        long long drop_min = min(x, y);

        if (k >= need_both) {
            // q = cuántas veces puedo restar drop_min manteniendo k >= need_both al inicio de cada cocción
            long long q = (k - need_both) / drop_min + 1; // >= 1
            ans += q;
            k -= q * drop_min; // nueva temperatura
        }

        // 2) Ya no alcanza para ambos. Si alcanza para uno, rematamos con ese.
        if (k >= a && k < b) {
            // Solo tipo 1
            ans += (k - a) / x + 1;
        } else if (k >= b && k < a) {
            // Solo tipo 2
            ans += (k - b) / y + 1;
        }
        // Si k < a y k < b, ya no se puede cocinar nada más.

        cout << ans << "\n";
    }
    return 0;
}



// #include <bits/stdc++.h>

// using namespace std;

// int main(){
//     int t; cin >> t;

//     while(t--){
//         long long k,a,b,x,y; cin >> k >> a >> b >> x >> y;

//         if(k < a && k < b){
//             cout << 0 << "\n";
//             continue;
//         }
//         long long ans1 = 0,ans2 = 0;
//         // Primera fase: usar el que baja menos mientras ambos sean posibles
//         if (x < y) {
//             if (k >= max(a,b)) {
//                 ans1 = (k - max(a,b))/x + 1;
//                 k -= ans1 * x;
//             }
//         } else {
//             if (k >= max(a,b)) {
//                 ans1 = (k - max(a,b))/y + 1;
//                 k -= ans1 * y;
//             }
//         }

//         // Segunda fase: rematar con el único tipo que queda posible
//         if (k >= a && k < b) {
//             ans2 = (k - a)/x + 1;
//         } else if (k >= b && k < a) {
//             ans2 = (k - b)/y + 1;
//         }
//         cout << ans1 + ans2 << "\n";
//     }
//     return 0;
// }