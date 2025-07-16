#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int test;
  cin >> test;
  while (test--) {
    int n, k;
    cin >> n >> k;

    if (k > n || n % k != 0) {
      cout << 1 << '\n' << n << '\n';
    } else {
      for (int i = 1; i <= n / 2; ++i) {
        int rem = i % k;
        int rem2 = (n - i) % k;
        if (rem != 0 && rem2 != 0) {
          cout << 2 << '\n' << i << ' ' << n - i << '\n';
          break;
        }
      }
    }
  }
  return 0;
}
