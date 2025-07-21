#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int test;
  cin >> test;

  while (test--) {
    int n, a, b;
    cin >> n >> a >> b;

    if (a + b + 2 <= n || (a == n && b == n)) {
      cout << "Yes\n";
    } else {
      cout << "No\n";
    }
  }

  return 0;
}