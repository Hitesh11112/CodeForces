#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> arr(n + 1, 1);
  arr[0] = arr[1] = 0;
  for (int curr = 2; curr * curr <= n; ++curr) {
    if (arr[curr]) {
      for (int i = curr * curr; i <= n; i += curr) {
        arr[i] = 0;
      }
    }
  }
  for (int i = 2; i <= n; ++i) {
    if (arr[i]) {
      cout << i << " \n"[i == n - 1];
    }
  }
}