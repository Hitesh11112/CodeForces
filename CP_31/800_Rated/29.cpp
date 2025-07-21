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
    for (auto &i : arr) {
      cin >> i;
    }
    int even = 0, odd = 0;
    for (int i = 0; i < n; ++i) {
      if (arr[i] % 2 == 0) {
        even += 1;
      } else {
        odd += 1;
      }
    }
    if (!even || !odd) {
      cout << n - 1 << '\n';
    } else {
      int ans = 0;
      even = 0, odd = 0;
      for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 == 0) {
          even += 1;
          if (odd > 1) {
            ans += (odd - 1);
          }
          odd = 0;
        } else {
          odd += 1;
          if (even > 1) {
            ans += (even - 1);
          }
          even = 0;
        }
      }
      if (odd) {
        ans += (odd - 1);
      } else {
        ans += (even - 1);
      }
      cout << ans << '\n';
    }
  }

  return 0;
}