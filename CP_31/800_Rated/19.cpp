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
    int negative = 0, positive = 0;
    for (auto ele : arr) {
      if (ele == 1) {
        positive += 1;
      } else {
        negative += 1;
      }
    }
    if (positive == negative) {
      if (negative % 2 == 0) {
        cout << 0 << '\n';
      } else {
        cout << 1 << '\n';
      }
    } else {
      if (positive > negative) {
        if (negative % 2 == 0) {
          cout << 0 << '\n';
        } else {
          cout << 1 << '\n';
        }
      } else {
        int diff = negative - positive;
        int diffDiv = diff / 2;
        if (diffDiv + positive < negative - diffDiv) {
          diffDiv += 1;
        }
        if (abs(negative - diffDiv) % 2 == 0) {
          cout << diffDiv << '\n';
        } else {
          cout << diffDiv + 1 << '\n';
        }
      }
    }
  }
  return 0;
}
