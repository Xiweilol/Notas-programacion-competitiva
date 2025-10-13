/****************************************************
 *  PLANTILLASA BINARIA — Xiwei Toolkit (C++)
 *  - lower_bound_idx / upper_bound_idx (a mano)
 *  - wrappers STL (lower/upper/binary_search)
 *  - binary search on answer:
 *      * first_true / last_true (enteros)
 *      * binaria en reales con iteraciones
 ****************************************************/
#include <bits/stdc++.h>
using namespace std;

/*======================
  Helpers para índices
  Requiere contenedor random-access (vector, string)
======================*/
template <class T>
int lower_bound_idx(const vector<T>& a, const T& x) {
    int L = 0, R = (int)a.size(); // R exclusivo
    while (L < R) {
        int mid = L + (R - L) / 2;
        if (a[mid] < x) L = mid + 1;   // descarta [L, mid]
        else R = mid;                  // descarta [mid+1, R)
    }
    return L; // primer i con a[i] >= x (si no existe, n)
}

template <class T>
int upper_bound_idx(const vector<T>& a, const T& x) {
    int L = 0, R = (int)a.size();
    while (L < R) {
        int mid = L + (R - L) / 2;
        if (a[mid] <= x) L = mid + 1;  // descarta [L, mid]
        else R = mid;                  // descarta [mid+1, R)
    }
    return L; // primer i con a[i] > x (si no existe, n)
}

/*======================
  Wrappers con STL
======================*/
template <class It, class T>
int lower_bound_idx_stl(It begin, It end, const T& x) {
    return int(std::lower_bound(begin, end, x) - begin);
}

template <class It, class T>
int upper_bound_idx_stl(It begin, It end, const T& x) {
    return int(std::upper_bound(begin, end, x) - begin);
}

template <class It, class T>
bool exists_stl(It begin, It end, const T& x) {
    return std::binary_search(begin, end, x);
}

/*======================
  Binary Search on Answer (enteros)
  - Predicados monótonos:
    * first_true: F...F T...T -> mínimo x que cumple ok(x)
    * last_true : T...T F...F -> máximo x que cumple ok(x)
======================*/
template <class T, class F>
T first_true(T lo, T hi, F ok) { // busca mínimo x ∈ [lo, hi] con ok(x)=true
    T ans = hi + 1;              // si no existe, devuelve hi+1
    while (lo <= hi) {
        T mid = lo + (hi - lo) / 2;
        if (ok(mid)) { ans = mid; hi = mid - 1; }
        else          lo = mid + 1;
    }
    return ans;
}

template <class T, class F>
T last_true(T lo, T hi, F ok) { // busca máximo x ∈ [lo, hi] con ok(x)=true
    T ans = lo - 1;             // si no existe, devuelve lo-1
    while (lo <= hi) {
        T mid = lo + (hi - lo) / 2;
        if (ok(mid)) { ans = mid; lo = mid + 1; }
        else          hi = mid - 1;
    }
    return ans;
}

/*======================
  Binary Search en reales (doble)
  - Usa iteraciones fijas para precisión (1e-9 aprox con 100 iters)
  - ok(mid) debe ser monótono
======================*/
template <class F>
double first_true_real(double lo, double hi, F ok, int iters = 100) {
    for (int i = 0; i < iters; ++i) {
        double mid = (lo + hi) / 2.0;
        if (ok(mid)) hi = mid;   // buscamos el primer true (mínimo)
        else          lo = mid;
    }
    return hi; // ~ primer true
}

/*======================
  Utilidades comunes
======================*/
template <class T>
pair<int,int> equal_range_idx(const vector<T>& a, const T& x) {
    int L = lower_bound_idx(a, x);
    int R = upper_bound_idx(a, x);
    if (L == (int)a.size() || a[L] != x) return {-1, -1};
    return {L, R - 1}; // rango [L, R-1]
}

template <class T>
int count_leq(const vector<T>& a, const T& x) {
    return upper_bound_idx(a, x); // # elementos <= x
}

/*======================
  DEMOS DE USO RÁPIDAS
======================*/
#ifdef LOCAL_DEMO
int main() {
    vector<int> v = {1,2,4,4,4,5,7};
    // lower/upper manual
    cout << "lower(4) = " << lower_bound_idx(v, 4) << "\n"; // 2
    cout << "upper(4) = " << upper_bound_idx(v, 4) << "\n"; // 5
    auto rg = equal_range_idx(v, 4); // [2,4]
    cout << "range(4) = [" << rg.first << "," << rg.second << "]\n";
    cout << "#<=4 = " << count_leq(v, 4) << "\n"; // 5

    // Binary on Answer: ejemplo Koko (mínima velocidad)
    vector<int> piles = {3,6,7,11};
    long long h = 8;
    auto ok = [&](long long k)->bool{
        long long hours = 0;
        for (int a : piles) hours += (a + k - 1) / k;
        return hours <= h;
    };
    long long kmin = first_true<long long>(1, *max_element(piles.begin(), piles.end()), ok);
    cout << "kmin = " << kmin << "\n";

    // last_true: sqrt floor
    long long N = 1e12;
    auto ok2 = [&](long long m)->bool{ return m <= 0 ? true : (m <= N / m); }; // m*m <= N sin overflow
    long long rt = last_true<long long>(0, (long long)2e9, ok2);
    cout << "isqrt(N) = " << rt << "\n";

    // Reales: primer x tal que x*x >= 2 (≈ sqrt(2))
    auto ok3 = [&](double x)->bool{ return x*x >= 2.0; };
    double s2 = first_true_real(0.0, 2.0, ok3, 80);
    cout << fixed << setprecision(9) << "sqrt(2) ≈ " << s2 << "\n";
}
#endif
