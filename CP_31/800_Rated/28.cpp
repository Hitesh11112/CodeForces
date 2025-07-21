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
    int flag = 0;
    function<void()> check = [&]() {
      int sum = arr[0];
      for (int i = 1; i < n; ++i) {
        if (sum == arr[i]) {
          flag = 1;
          break;
        }
        sum += arr[i];
      }
    };
    check();
    if (flag) {
      sort(arr.begin(), arr.end());
      swap(arr[0], arr.back());
      
      flag = 0;
      check();
      if (flag) {
        cout << "NO\n";
      } else {
        cout << "Yes\n";
        for (auto i : arr) {
          cout << i << ' ';
        }
        cout << '\n';
      }
    } else {
      cout << "Yes\n";
      for (auto i : arr) {
        cout << i << ' ';
      }
      cout << '\n';
    }
  }
  return 0;
}