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
    int cnt = 1;
    for (auto &i : a) {
      cin >> i;
    }
    vector<int> b(n);
    for (auto &i : b) {
      cin >> i;
    }

    for (int i = 0; i < n; ++i) {
      if (a[i] > b[i]) {
        cnt += (a[i] - b[i]);
      }
    }
    cout << cnt << "\n";
  }

  return 0;
}