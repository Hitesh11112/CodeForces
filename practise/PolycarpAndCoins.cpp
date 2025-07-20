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

    int cnt = n / 3;

    if (n % 3 == 0) {
      cout << cnt << ' ' << cnt << '\n';
    } else if (n % 3 == 1) {
      cout << cnt + 1 << ' ' << cnt << '\n';
    } else {
      cout << cnt << ' ' << cnt + 1 << '\n';
    }
  }

  return 0;
}