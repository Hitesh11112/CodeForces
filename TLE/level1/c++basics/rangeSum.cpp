#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t;
  cin >> t;
  while (t--) {
    long long l, r;
    cin >> l >> r;
    if (l > r) swap(l, r);
    auto sum = [&](long long num) {
      return (num % 2 == 0) ? ((num / 2) * (num + 1)) : num * ((num + 1) / 2);
    };
    cout << sum(r) - sum(l - 1) << '\n';
  }
}