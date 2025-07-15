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
    int diff = 1e9 + 5;
    int flag = 1;
    for (int i = 1; i < n; ++i) {
      if (!flag) {
        break;
      }
      if (arr[i] >= arr[i - 1]) {
        diff = min(diff, arr[i] - arr[i - 1]);
      } else {
        flag = 0;
      }
    }

    if (!flag) {
      cout << 0 << '\n';
    } else {
      if (diff == 1 || diff == 0) {
        cout << 1 << '\n';
      } else {
        cout << (diff / 2) + 1 << '\n';
      }
    }
  }

  return 0;
}