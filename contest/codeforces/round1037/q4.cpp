#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int test;
  cin >> test;

  while (test--) {
    int num, coins;
    cin >> num >> coins;

    multimap<pair<int, int>, int> storeEle;
    for (int i = 0; i < num; ++i) {
      int left, right, real;
      cin >> left >> right >> real;
      storeEle.insert({{left, right},real});
    }
    for (auto i : storeEle) {
      int left = i.first.first;
      int right = i.first.second;
      int real = i.second;

      if (coins >= left && coins <= right) {
        coins = max(coins, real);
      }
    }
    cout << coins << '\n';
  }
  return 0;
}