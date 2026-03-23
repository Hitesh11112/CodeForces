#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int cntOdd = 0, cntEven = 0;
    for (int i = 0; i < n; ++i) {
      int a;
      cin >> a;
      if (a % 2) {
        cntOdd += 1;
      } else {
        cntEven += 1;
      }
    }
    if (n % 2) {
      cout << -1 << '\n';
      continue;
    }
    if (cntOdd == cntEven) {
      cout << 0 << '\n';
    } else if (cntOdd == 0 || cntEven == 0) {
      if (!cntOdd) {
        cout << cntEven / 2 << '\n';
      } else {
        cout << cntOdd / 2 << '\n';
      }
    } else {
      cout << (abs(cntOdd - cntEven)) / 2 << '\n';
    }
  }
  return 0;
}