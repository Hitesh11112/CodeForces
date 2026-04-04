#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin >> n;

  vector<long long> arr(n);
  for (long long &ele : arr) {
    cin >> ele;
  }
  sort(arr.begin(), arr.end());
  long long mid = (n%2 ? arr[(n / 2)] : arr[(n / 2)-1]), ans = 0;


  for (int curr = 0; curr < n; ++curr) {
    ans += abs(arr[curr] - mid);
  }
  cout << ans << '\n';
}