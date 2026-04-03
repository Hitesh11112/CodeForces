#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin >> n;
  vector<pair<long long, int>> arr;
  for (int curr = 0; curr < n; ++curr) {
    long long a, b;
    cin >> a >> b;
    arr.emplace_back(a, +1); // true for arrival
    arr.emplace_back(b, -1); // false for leaving
  }
  sort(arr.begin(), arr.end(), [](auto &a, auto &b) {
    if (a.first == b.first)
      return a.second > b.second; //+1 comes first and then -1 arrival and then leaving 
    return a.first < b.first;
  });
  long long cnt = 0, ans = 0;

  for (int curr = 0; curr < (int)arr.size(); ++curr) {
    cnt += arr[curr].second;
    ans = max(ans, cnt);
  }
  cout << ans << '\n';
}