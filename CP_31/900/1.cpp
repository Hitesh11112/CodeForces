#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int test;
  cin >> test;

  while (test--) {
    int a, b;
    cin >> a >> b;

    int kx, ky, qx, qy;
    cin >> kx >> ky >> qx >> qy;

    if ((abx(kx - qx) > a) && (abs(ky - qy) > 5)) {
      cout << 0 << '\n';
    } else {
      
    }
  }

  return 0;
}