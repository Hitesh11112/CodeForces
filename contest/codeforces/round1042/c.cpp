#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (auto &i : a) {
      cin >> i;
    }
    vector<int> b(n);
    for (auto &i : b) {
      cin >> i;
    }

    map<int, int> bModFre;
    for (int i = 0; i < n; ++i) {
      bModFre[b[i] % k] += 1;
    }
    bool flag = 0;

    for (int i = 0; i < n; ++i) {
      int totalCnt = 0;
      int mod1 = a[i] % k;
      int mod2 = k - mod1;

      if (bModFre.count(mod1)) {
        bModFre[mod1] -= 1;
        if (bModFre[mod1] == 0) {
          bModFre.erase(mod1);
        }
        totalCnt += 1;
      } else if (bModFre.count(mod2)) {
        bModFre[mod2] -= 1;
        if (bModFre[mod2] == 0) {
          bModFre.erase(mod2);
        }
        totalCnt += 1;
      }
      if (totalCnt == 2) {
        flag = 1;
        break;
      }
    }

    if (flag == 0 && bModFre.size() == 0) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
  return 0;
}