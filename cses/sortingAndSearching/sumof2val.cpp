#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, x;
  cin >> n >> x;

  vector<long long> arr(n);
  for (auto &ele : arr) {
    cin >> ele;
  }

  bool get = 1;
  map<long long, long long> mp;
  for (int curr = 0; curr < n; ++curr) {
    int ele = arr[curr];
    if (mp.count(x - ele)) {
      cout << mp[x - ele] << ' ' << curr+1 << '\n';
      get = 0;
      break;
    }
    mp[ele] = curr+1;
  }
  if (get) {
    cout << "IMPOSSIBLE\n";
  }
  return 0;
}