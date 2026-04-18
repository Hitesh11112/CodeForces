// Hitesh Patwal
// CSES Problem set Sorting and Searching
// Problem: Collecting Number 2
#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, m;
  cin >> n >> m;

  vector<long long> arr(n);
  vector<int> arr2(n + 2, 0);
  arr2[0] = 0;
  arr2[n + 1] = n + 1;

  for (int ind = 1; ind <= n; ++ind) {
    cin >> arr[ind];
    arr2[arr[ind]] = ind;
  }

  long long cnt = 1;
  for (int ind = 2; ind <= n; ++ind) {
    if (arr2[ind] < arr2[ind - 1]) {
      cnt += 1;
    }
  }
  for (int ind = 0; ind < m; ++ind) {
    int i, j;
    cin >> i >> j;
    if (i > j) {
      swap(i, j);
    }
    int val1 = arr[i];
    int val2 = arr[j];

    if (val1 == (val2 + 1)) {
      cnt -= 1;
    }
    if (val1 == (val2 - 1)) {
      cnt += 1;
    }

    if (arr2[val1 + 1] > i && arr2[val1 + 1] < j) {
      cnt += 1;
    }
    if (arr2[val1 - 1] > i && arr2[val1 - 1] < j) {
      cnt -= 1;
    }
    if (arr2[val2 - 1] > i && arr2[val2 - 1] < j) {
      cnt += 1;
    }
    if (arr2[val2 + 1] > i && arr2[val2 + 1] < j) {
      cnt -= 1;
    }

    cout << cnt << endl;

    swap(arr[i], arr[j]);
    arr2[val1] = j;
    arr2[val2] = i;
  }
}
