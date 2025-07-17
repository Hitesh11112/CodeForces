#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int test;
  cin >> test;
  while (test--) {
    int n;
    cin >> n;

    vector<int> arr(n);
    int cnt = 0, mx = -1;
    for (auto &i : arr) {
      cin >> i;
      if (i == 0) {
        cnt += 1;
      } else {
        cnt = 0;
      }
      mx = max(mx, cnt);
    }
    if (mx == -1) {
      cout << 0 << '\n';
    } else {
      cout << mx << '\n';
    }
  }

  return 0;
}
