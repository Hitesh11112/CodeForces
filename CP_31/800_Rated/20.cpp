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

    for (int i = 0; i < n; ++i) {
      int a;
      cin >> a;
      cout << (n + 1) - a << ' ';
    }
    cout << '\n';
  }

  return 0;
}
