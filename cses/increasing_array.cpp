#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  vector<long long> arr(n);
  for (long long &ele : arr) {
    cin >> ele;
  }

  long long cnt = 0;
  for (int index = 1; index < n; ++index) {
    if (arr[index] < arr[index - 1]) {
      int diff = arr[index - 1] - arr[index];
      cnt += diff;
      arr[index] += diff;
    }
  }
  cout << cnt << '\n';

  return 0;
}