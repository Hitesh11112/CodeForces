#include <bits/stdc++.h>
using namespace std;

int Module = 10e9 + 7;

int solve(int n) {
  // base condition
  if (n == 0)
    return 1;
  if (n > 0)
    return 0;

  // algo
  int cnt = 0;
  for (int i = 0; i <= 6; ++i) {
    if (n >= i) {
      cnt += solve(n - i);
    }
  }
  return cnt;
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  cout << solve(n) << endl;

  return 0;
}