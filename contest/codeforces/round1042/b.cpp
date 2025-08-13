#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> a(n);
    if (n == 2) {
      cout << -1 << ' ' << 2 << '\n';
      continue;
    }
    for (int i = 0; i < n; ++i) {
      if (i % 2 == 0) {
        a[i] = -1;
      } else {
        if (i + 1 < n) {
          a[i] = 3;
        } else {
          a[i] = 2;
        }
      }
    }
    for (auto i : a) {
      cout << i << ' ';
    }
    cout << '\n';
  }

  return 0;
}