#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int test;
  cin >> test;

  while (test--) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (d < b) {
      cout << -1 << '\n';
    } else {
      int change = abs(d - b);
      if (a + change < c) {
        cout << -1 << '\n';
      } else {
        int newA = a + change;
        change += abs(newA - c);
        cout << change << '\n';
      }
    }
  }
  return 0;
}
