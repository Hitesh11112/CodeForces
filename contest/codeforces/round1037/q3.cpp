#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int test;
  cin >> test;

  while (test--) {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);

    for (auto &i : arr) {
      cin >> i;
    }

    int start = arr[k - 1];
    int water = 1;

    map<int, int> storeEle;
    for (int i : arr) {
      if (i >= start) {
        storeEle[i] = 1;
      }
    }
    if (storeEle.size() == 0) {
      cout << "NO\n";
    } else if (storeEle.size() > 1) {
      vector<int> nums;
      for (auto i : storeEle) {
        nums.emplace_back(i.first);
      }
      bool flag = 0;
      for (int i = 0; i < nums.size() - 1; ++i) {
        int ele = nums[i];
        int diff = nums[i + 1] - nums[i];
        if ((water + (diff - 1)) > ele) {
          flag = 1;
          break;
        } else {
          water += diff;
        }
      }
      if (flag)
        cout << "NO" << '\n';
      else
        cout << "YES" << '\n';
    } else {
      cout << "YES\n";
    }
  }
  return 0;
}