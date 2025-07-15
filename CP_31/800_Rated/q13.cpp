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

    for (int i = 0; i < n; ++i) {
      cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    if (arr[0] == arr.back()) {
      cout << -1 << '\n';
    } else {
      int ele = arr.back();
      int index = n - 2;
      while (1) {
        if (arr[index] != arr[index + 1]) {
          break;
        } else {
          index -= 1;
        }
      }
      cout << index + 1 << ' ' << n - index - 1 << '\n';
      for (int i = 0; i <= index; ++i) {
        cout << arr[i] << ' ';
      }
      cout << '\n';
      for (int i = index + 1; i < n; ++i) {
        cout << arr[i] << ' ';
      }
      cout << '\n';
    }
  }

  return 0;
}
