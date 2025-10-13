#include <iostream>
#include <string>
using namespace std;

int main() {
  int N;
  string S;
  cin >> N >> S;
  if (N < 3) {
    cout << "No\n";
  } else {
    if (S[N - 3] == 't' && S[N - 2] == 'e' && S[N - 1] == 'a') {
      cout << "Yes\n";
    } else {
      cout << "No\n";
    }
  }
}
