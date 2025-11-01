#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int test;
  cin >> test;

  while (test--) {
    int len;
    cin >> len;

    vector<int> arr(len);
    int total = 0;
    for (auto &i : arr) {
      cin >> i;
      total += i;
    }
    for (auto i : arr)
      cout << i << ' ';
    cout << endl;
    vector<int> fre(11, 0);
    int ans = 0;
    for (auto i : arr) {
      fre[i] += 1;
      ans = (fre[i] > ans) ? i : ans;
    }
    cout << ((ans > 1) ? ans : (total / len)) << endl;
  }

  return 0;
}
