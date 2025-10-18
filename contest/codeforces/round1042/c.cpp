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

      auto it1 = bModFre.find(mod1);
      if (it1 != bModFre.end()) {
        it1->second -= 1;
        if (it1->second == 0) {
          bModFre.erase(it1);
        }
        totalCnt += 1;
      } else {
        auto it2 = bModFre.find(mod2);
        if (it2 != bModFre.end()) {
          it2->second -= 1;
          if (it2->second == 0) {
            bModFre.erase(it2);
          }
          totalCnt += 1;
        }
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
