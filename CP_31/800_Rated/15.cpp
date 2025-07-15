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

    int even = 0, odd = 0;
    for (int i = 0; i < n; ++i) {
      if (arr[i] % 2 == 0) {
        even += 1;
      } else {
        odd += 1;
      }
    }
    if (odd == 0) {
      cout << "Yes" << '\n';
    } else if (even == 0) {
      if (odd % 2 == 0) {
        cout << "Yes" << '\n';
      } else {
        cout << "No" << '\n';
      }
    } else {
      if (odd % 2 == 0) {
        cout << "Yes" << '\n';
      } else {
        cout << "No" << '\n';
      }
    }
  }
  return 0;
}
