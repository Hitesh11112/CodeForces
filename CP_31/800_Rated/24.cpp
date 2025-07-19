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
    vector<int> arr(n);
    for (auto &i : arr) {
      cin >> i;
    }
    int ans = -1;
    for (int i = 0; i <= 256; ++i) {
      vector<int> nums;
      for (auto j : arr) {
        nums.push_back(i ^ j);
      }
      int val = nums[0];
      for (int i = 1; i < nums.size(); ++i) {
        val = (val ^ nums[i]);
      }
      if(val == 0) {
        ans = i;
        break;
      }
    }
    cout << ans << '\n';
  }

  return 0;
}
