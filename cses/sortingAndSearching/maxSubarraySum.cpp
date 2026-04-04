#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin >> n;

  vector<long long> arr(n);
  for (long long &ele : arr) {
    cin >> ele;
  }
  long long ans = INT_MIN;
  long long cnt = 0;
  for (int curr = 0; curr < n; ++curr) {
    cnt = max(arr[curr], cnt + arr[curr]);
    ans = max(ans, cnt);
  }
  cout << ans << '\n';
}