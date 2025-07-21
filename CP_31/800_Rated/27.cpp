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
    int cnt = 0;
    for (auto &i : arr) {
      cin >> i;
      if (i == 2) {
        cnt += 1;
      }
    }

    if (cnt % 2 == 0) {
      int half = 0, index = 0;
      for (int i = 0; i < n; ++i) {
        if (arr[i] == 2) {
          half += 1;
          if (half == cnt / 2) {
            index = i;
            break;
          }
        }
      }
      cout << index + 1 << '\n';
    } else {
      cout << -1 << '\n';
    }
  }

  return 0;
}