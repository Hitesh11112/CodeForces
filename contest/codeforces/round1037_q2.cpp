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

    vector<int> arr(n);
    for (auto &i : arr) {
      cin >> i;
    }
    bool rest = false;
    int cnt = 0, ans = 0;
    for (int i = 0; i < n; ++i) {
      if (arr[i] == 0) {
        if (rest) {
          rest = false;
          cnt = 0;
          continue;
        }
        cnt += 1;
        if (cnt == k) {
          ans += 1;
          rest = true;
        }
      } else {
        cnt = 0;
        rest = false;
      }
      // cout << i << ' ' << ans << '\n';
    }
    cout << ans << '\n';
  }
  return 0;
}
