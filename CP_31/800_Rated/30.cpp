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

    string s;
    s += to_string(n);

    int ans = (s.size() - 1) * 9;
    ans += (s[0] - '0');
    cout << ans << '\n';
  }

  return 0;
}