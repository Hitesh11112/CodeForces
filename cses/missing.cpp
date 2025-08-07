#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  vector<int> arr(n);
  for (auto &ele : arr) {
    cin >> ele;
  }
  int ans = -1;

  sort(arr.begin(), arr.end());
  for (int index = 1; index < n; ++index) {
    int diff = abs(arr[index] - arr[index - 1]);
    if (diff != 1) {
      ans = arr[index - 1] + 1;
      break;
    }
  }
  cout << (ans == -1 ? arr[n - 1] + 1 : ans) << '\n';
  return 0;
}
