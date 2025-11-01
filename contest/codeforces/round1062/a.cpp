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
    cout << ((a == b && b == c && c == d) ? "YES" : "NO") << endl;
  }

  return 0;
}