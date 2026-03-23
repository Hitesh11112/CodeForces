#include <bits/stdc++.h>
using namespace std;

int main() {
  long long firstPrice, currMoney, noBanana;
  cin >> firstPrice >> currMoney >> noBanana;

  long long ans = firstPrice * noBanana * (noBanana + 1) / 2;
  ans = max(0ll, ans - currMoney);
  cout << ans << '\n';
}